#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 1005

#define TRUE 1
#define FALSE 0

struct Pilha{
	char Cara;
	struct Pilha * Prox;
};

typedef struct Pilha TPi;

typedef struct{
	TPi * Topo;
}Desc;

void InserePilha(char N,Desc * A){
	TPi * Aux, * Ant;
	
	Aux = (TPi *)malloc(sizeof(TPi));
	
	Aux->Cara = N;
	Aux->Prox = NULL;
	
	if(A->Topo == NULL){
		A->Topo = Aux;
	}
	else{
		Ant = A->Topo;
		A->Topo = Aux;
		Aux->Prox = Ant;
	}
}

int RemoveTopo(Desc * A){
	TPi * Aux, * Ant;
	
	if(A->Topo != NULL && A->Topo->Cara == '(' ){
		Aux = A->Topo;
		Ant = Aux->Prox;
		A->Topo = Ant;
		free(Aux);
		return 0;
	}
	else
		return 1;
}

void Destroi(Desc * A){
	TPi * Aux, * Ant;
	
	while( A->Topo != NULL ){
		Aux = A->Topo;
		Ant = Aux->Prox;
		A->Topo = Ant;
		free(Aux);
	}
}

int main(void){
	Desc TDesc;
	char Expre[MAX_TAM], Flag;
	TDesc.Topo = NULL;
	int Cont;
	
	while( scanf("%s", Expre) != EOF ){
		
		Cont = 0;
		Flag = FALSE;
		
		while( Expre[Cont] != '\0'){
			
			if( Expre[Cont] == '(' )
				InserePilha( '(', &TDesc);
			
			else if( Expre[Cont] == ')' ){
				
				if( RemoveTopo(&TDesc) == 1){
					Flag = TRUE;
					break;
				
				}
			}
			Cont++;
		}
		
		if(Flag == TRUE || TDesc.Topo != NULL)
			printf("incorrect\n");
		else
			printf("correct\n");
		
		Destroi(&TDesc);
		
	}
	
	return 0;
}