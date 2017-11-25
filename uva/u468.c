#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_TAM 1000000
#define MAX_CONT 250

typedef struct{
	int Qtd;
	char Let;
}TLetra;

int Comp(const void * P1, const void * P2){
	TLetra * A = (TLetra *)P1, * B = (TLetra *)P2;
	
	if(A->Qtd > B->Qtd)
		return -1;
	else if(A->Qtd < B->Qtd)
		return 1;
	else
		return 0;

}

void Limpa(){
	while(getchar() != '\n');
}

void Arru(char * A){
	int Cont = 0;
	
	while(A[Cont] != '\n' && A[Cont] != '\0' && A[Cont] != '\r')
		Cont++;
	
	A[Cont] = '\0';
	
}

int main(void){
	char Entra[MAX_TAM], Sai[MAX_TAM], Lixo[5], Axu[MAX_TAM]; 
	TLetra ContEntra[MAX_CONT], ContSai[MAX_CONT];
	int Vez, ContVez, Cont, C;
	
	scanf("%d", &Vez);
	
	Limpa();
	
	for(ContVez=0; ContVez < Vez; ContVez++){
		
		if(ContVez != 0)
			printf("\n");
		
		for(Cont=0; Cont < MAX_CONT; Cont++){
			ContEntra[Cont].Qtd = 0;
			ContEntra[Cont].Let = 124;
			ContSai[Cont].Qtd = 0;
			ContSai[Cont].Let = 124;
		}
		
		fgets(Lixo, 5, stdin);
		
		fgets(Entra, MAX_TAM, stdin);
		fgets(Sai, MAX_TAM, stdin);
		
		Arru(Entra);
		Arru(Sai);
		
		Cont = 0;
		
		while(Entra[Cont] != '\0'){
			
			if(Entra[Cont] >= 'A' && Entra[Cont] <= 'Z' || Entra[Cont] >= 'a' && Entra[Cont] <= 'z'){
				
				ContEntra[ Entra[Cont] ].Qtd++;
				ContEntra[ Entra[Cont] ].Let = Entra[Cont];
			}
			Cont++;
		}
		
		Cont = 0;
		
		while(Sai[Cont] != '\0'){
			
			if(Sai[Cont] >= 'A' && Sai[Cont] <= 'Z' || Sai[Cont] >= 'a' && Sai[Cont] <= 'z'){
				ContSai[ Sai[Cont] ].Qtd++;
				ContSai[ Sai[Cont] ].Let = Sai[Cont];
			}
			Cont++;
		}
		
		qsort(ContEntra, MAX_CONT, sizeof(TLetra), Comp);
		qsort(ContSai, MAX_CONT, sizeof(TLetra), Comp);
		
		Cont = 0;
		
		while(ContEntra[Cont].Qtd != 0 && ContSai[Cont].Qtd != 0){
			
			C = 0;
			
			while(Sai[C] != '\0'){
				
				if( Sai[C] == ContSai[Cont].Let ){
					Axu[C] = ContEntra[Cont].Let;
				}
				
				C++;
			
			}
		
		Cont++;
		
		}
		
		C = strlen(Sai);
		
		Axu[C] = '\0';
		
		printf("%s\n", Axu);
	}
	
	return 0;
}