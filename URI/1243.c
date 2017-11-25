#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 60

#define TRUE 1
#define FALSE 0

void Arru(char * A){
	while(*A != '\n' && *A != '\r' && *A != '\0')
		A++;
	*A = '\0';
}

int Conta(char * Pa){
	int Cont=0, Flag = FALSE;
	
	while(Pa[Cont] != '\0'){
		
		if( Cont != 0 && Pa[Cont] == '.' && Pa[Cont + 1] == '\0' ){
			Flag = FALSE;
			if( Pa[Cont] == '.' )
				Pa[Cont] = '\0';
		}
		else if( ( Pa[Cont] < 'a' || Pa[Cont] > 'z' ) && ( Pa[Cont] < 'A' || Pa[Cont] > 'Z' ) ){
			Flag = TRUE;
			break;
		}	
		Cont++;
	}
	
	if(Flag == FALSE)
		return strlen( Pa );
	else
		return 0;
	
}

int main(void){
	char Frase[MAX_TAM], Palavra[MAX_TAM];
	int SomaTam, Qtd, QtdPa, Cont, C, Axu;
	
	while( fgets(Frase, MAX_TAM, stdin) != NULL ){
		Arru(Frase);
		
		SomaTam = Qtd = QtdPa = 0;
			
		Cont = 0;
		C = 0;
		Axu = strlen(Frase);
		do{
			
			if( Frase[Cont] == ' ' || Frase[Cont] == '\0'){
				
				Palavra[C] = '\0';
				C = 0;
				Cont++;
				
				
				if( (Qtd = Conta(Palavra)) != 0){
					SomaTam += Qtd;
					QtdPa++;
				}
				
			}
			else{
				Palavra[C] = Frase[Cont];
				Cont++;
				C++;
			}
			
		}while(Cont <= Axu);
		
		if(QtdPa != 0)
			Qtd = SomaTam/QtdPa;
		
		if(Qtd <= 3)
			printf("250\n");
		else if(Qtd <= 5)
			printf("500\n");
		else
			printf("1000\n");
	}
	
	return 0;
}