#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

struct Cartas{
	int C;
	struct Cartas * prox;
};

typedef struct Cartas TCartas;

typedef struct{
	TCartas * Inicio, * Fim;
	int Qtd;
}TDescritor;

void CriaLista(TDescritor * A, int Num){
	TCartas * Aux, * Ini, * Ant;
		
		Aux = (TCartas *)malloc( sizeof(TCartas) );
		
		Aux->C = Num;
		Aux->prox =  NULL;
		A->Qtd++;
		
		if( A->Inicio == NULL){
			A->Inicio = Aux;
			A->Fim = Aux;
		}
		else{
			Ant = A->Fim;
			Ant->prox = Aux;
		}
	
	A->Fim = Aux;
	
}

void RevoCirc(TDescritor * A){
	TCartas * Aux, * Axu;
	int Cont=1;
	char Format = FALSE;
	
	while( A->Qtd != 1){
		
		Cont++;
		
		if(Cont == 2){
			Axu = A->Inicio;
			A->Inicio = Axu->prox;
			
			if(Format != FALSE)
				printf(",");
			
			Format = TRUE;
			
			printf(" %d", Axu->C);

			free(Axu);
			A->Qtd--;
			Cont=0;
		}
		else{
			Aux = A->Inicio;
			A->Inicio = Aux->prox;
			A->Fim->prox = Aux;
			A->Fim =  Aux;
			Aux->prox = NULL;
		}
		
	}
	
}

int main(void){
	int Num, Cont;
	TDescritor Descri;
	
	while( scanf("%d", &Num) && Num != 0){
		Descri.Inicio = NULL;
		Descri.Fim = NULL;
		Descri.Qtd = 0;
		
		for(Cont=1; Cont <= Num; Cont++)
			CriaLista(&Descri, Cont);
		
		printf("Discarded cards:");
		
		RevoCirc(&Descri);
		
		printf("\nRemaining card: %d\n", Descri.Inicio->C);
		
		free(Descri.Inicio);
		
	}
	
	return 0;
}