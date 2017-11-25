#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	
	char Palavra[1055], Comp;
	int i;
	
	fgets(Palavra, 1055, stdin);
	
	while(Palavra[0] != '*'){
	
	//Retirado o '\n' e mudando por nulo
		for(i=0; i <= 1055; i++){
			if(Palavra[i] == '\n'){
				Palavra[i] = '\0';
				break;
				}
			}
	Comp = toupper(Palavra[0]); //Recebe a primeira letra da Frase
	
	for(i=1; i <= 1055; i++){
	
		if(Palavra[i-1] == ' ' && toupper(Palavra[i]) != Comp){
			printf("N\n");
			break;
			}
			
		if(Palavra[i] == '\0'){
			printf("Y\n");
			break;
			}
	}
	
	fgets(Palavra, 1055, stdin);
	
	}
	return(0);
}