#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void TiLineFeed(char * Palavra){//Retira quebra de linha e retorno de linha	
	int Cont=0;
	while(Palavra[Cont] != '\0'){
		if(Palavra[Cont] == '\n' || Palavra[Cont] == '\r'){
			Palavra[Cont] = '\0';
			break;
		}
		Cont++;
	}
}

int main(){
	char Palavra[60], Saida[200];
	int Con=0, Lugar=0, Rep, i=0, b=0;
	
	while(fgets(Palavra, 60, stdin) != NULL){
	
		TiLineFeed(Palavra);
		
		while(Palavra[Con] != '\0'){
			
			if(Palavra[Con] != '_' && Palavra[Con] != '*'){
				Saida[Lugar] = Palavra[Con];
				Con++;
				Lugar++;
			}
			else if(Palavra[Con] == '_' && i == 0){
				Saida[Lugar] = '<';
				Saida[Lugar+1] = 'i';
				Saida[Lugar+2] = '>';
				Con++;
				Lugar += 3;
				i++;
			}
			else if(Palavra[Con] == '_' && i == 1){
				Saida[Lugar] = '<';
				Saida[Lugar+1] = '/';
				Saida[Lugar+2] = 'i';
				Saida[Lugar+3] = '>';
				Con++;
				Lugar += 4;
				i = 0;
			}
		
			else if(Palavra[Con] == '*' && b == 0){
				Saida[Lugar] = '<';
				Saida[Lugar+1] = 'b';
				Saida[Lugar+2] = '>';
				Con ++;
				Lugar += 3;
				b++;
			}
			else if(Palavra[Con] == '*' && b == 1){
				Saida[Lugar] = '<';
				Saida[Lugar+1] = '/';
				Saida[Lugar+2] = 'b';
				Saida[Lugar+3] = '>';
				Con++;
				Lugar += 4;
				b = 0;
			}
		}
		Saida[Lugar] = '\0';	
		printf("%s\n", Saida);
		b=0;
		i=0;
		Lugar=0;
		Con=0;
		}
	
	
	return 0;
}