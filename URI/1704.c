#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 10000
#define MAX_ARESTAS 
#define INFINITO

#define TRUE 1
#define FALSE 0

typedef struct{
	int V, T;
}Ttempo;

int Comp(const void *P1, const void *P2){
	Ttempo *A = (Ttempo *)P1, *B = (Ttempo *)P2;
	
	if(A->V > B->V)
		return -1;
	else if(A->V < B->V)
		return 1;
	else{
		if(A->T > B->T)
			return 1;
		else if(A->V < B->V)
			return -1;
		else
			return 0;
	}
}

int Max(Ttempo * Vet, int Limit){
	int Soma = 0, Cont, Tatu;
	
	
	
}

int main(void){
	int Taref, Temp, Cont, Soma;
	Ttempo Hue[MAX_VERTICES];
	
	while( scanf("%d %d", &Taref, &Temp) != EOF ){
		
		Soma = 0;
		
		for(Cont = 0; Cont < Taref; Cont++){
			scanf("%d %d", &Hue[Cont].V, &Hue[Cont].T);
			Soma += Hue[Cont].V;
		}
		
		qsort(Hue, Taref, sizeof(Ttempo), Comp);
		
		for(Cont = 0; Cont < Taref; Cont++)
			printf("%d %d\n", Hue[Cont].V, Hue[Cont].T);
		
		//Soma -= Max(Hue, Taref);
		
	}

	return 0;
}