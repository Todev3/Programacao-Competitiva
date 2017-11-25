#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 30
#define MAX_ARESTAS 
#define INFINITO

#define TRUE 1
#define FALSE 0

typedef struct{
	char A, B;
}Back;

Back Pares[MAX_VERTICES * 2];
char Vertice[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];
int Max = 0;

int Dfs( int V, int Limit, int Grau){
	int Cont, ContSai;
	char Flag, Algo=FALSE;
	
	Vertice[V] = TRUE;
	
	for(Cont = 0; Cont < Limit; Cont++){
		if( Arestas[V][Cont] == TRUE ){
			Algo = TRUE;
			Flag = TRUE;
			
			for(ContSai = 0; ContSai < Max; ContSai++)
				if( Pares[ContSai].A == V && Pares[ContSai].B == Cont ){
					Flag = FALSE;
					break;
				}
			
			if( Flag ){
				
				for(ContSai = 0; ContSai < Grau; ContSai++)
					printf("  ");
				
				printf("%d-%d", V, Cont);
				Pares[Max].A = V;
				Pares[Max++].B = Cont;
			}
			
			if( Vertice[Cont] == FALSE){
				printf(" pathR(G,%d)", Cont);
			}
			
			printf("\n");
			
			if( Vertice[Cont] == FALSE ){
				Dfs(Cont, Limit, Grau+1);
			}
		}
		
	}
	return Algo; 
}

int Vazio(int Max){
	int Cont; 
	
	for(Cont=0; Cont < Max; Cont++)
		if( Vertice[Cont] == FALSE)
			return Cont;
	
	return -1;
	
}

int main(void){
	int Vezes, Vert, Ares, X, Y, Cont, ContVezes, Flag;
	
	scanf("%d", &Vezes);
	
	for(ContVezes = 0; ContVezes < Vezes; ContVezes++){
		
		memset( Arestas, FALSE, sizeof(Arestas) );
		memset( Vertice, TRUE, sizeof(Vertice) );
		Max = 0;
		
		scanf("%d %d", &Vert, &Ares);
		
		for(Cont =0 ; Cont < Ares; Cont++){
			scanf("%d %d", &X, &Y);
			Arestas[X][Y] = TRUE;
			Vertice[X] = FALSE;
			Vertice[Y] = FALSE;
		}
		
		printf("Caso %d:\n", ContVezes+1);
		Flag = FALSE;
		
		while( (Cont = Vazio(Vert)) != -1 ){
	
			Dfs( Cont, Vert, 1 );
			printf("\n", Cont);
		}
		
	}
	
	return 0;
}