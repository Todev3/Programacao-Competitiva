#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 1010
#define MAX_ARESTAS 10010
#define INFINITO 10000

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES];
int Arestas[MAX_ARESTAS][MAX_ARESTAS];

int Dijkstra(int Max, int Origem, int Destino){
	int Lin, Col, Menor, Prox;
	int Distancias[Max + 1];
	
	memset(Vertices, FALSE, sizeof(char) * (Max + 1) );
	
	for(Lin = 0; Lin < Max; Lin++)
		Distancias[Lin] = INFINITO;
	
	Distancias[Origem] = 0;
	
	for( Lin = 0; Lin < Max; Lin++){
		
		Menor = INFINITO;
		
		for( Col = 0; Col < Max; Col++ ){
			if( Vertices[Col] == FALSE && Distancias[Col] < Menor ){
				Menor = Distancias[Col];
				Prox = Col;
			}
		}
		
		Vertices[Prox] = TRUE;
		
		for( Col = 0; Col < Max; Col++ )
			if( Arestas[Prox][Col] != INFINITO )
				if( Distancias[Prox] + Arestas[Prox][Col] < Distancias[Col] ){
					Distancias[Col] = Distancias[Prox] + Arestas[Prox][Col];
				}
	}

	return Distancias[Destino];
}

int main(void){
	int NumArest, NumVert, X, Y, Peso, Cont, Cont2;
	int Resp;
	
	while( scanf("%d %d", &NumVert, &NumArest) != EOF ){
		
		for( Cont = 0; Cont <= NumVert+1; Cont++)
			for( Cont2 = 0; Cont2 <= NumVert+1; Cont2++)
				Arestas[Cont][Cont2] = INFINITO;
			
		for( Cont = 0; Cont < NumArest; Cont++ ){
			
			scanf("%d %d %d", &X, &Y, &Peso);
			
			Arestas[X][Y] = Peso;
			Arestas[Y][X] = Peso;
			
		}

		Resp = Dijkstra(NumVert+2, 0, NumVert+1);
		
		printf("%d\n", Resp);
		
	}
	
	return 0;
}