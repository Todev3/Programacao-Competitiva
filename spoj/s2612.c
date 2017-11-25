#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 3010
#define MAX_ARESTAS 150010
#define INFINITO

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES];
short int Arestas[MAX_VERTICES][MAX_VERTICES], ArestasB[MAX_VERTICES][MAX_VERTICES];

int Bfs( short int Aresta[MAX_VERTICES][MAX_VERTICES], short int Noh, short int NumMax){
	short int Ini = 0, Fim = 0, Max, Cont, Qtd=0;
	short int Mat[MAX_VERTICES];
	
	Mat[ Fim++ ] = Noh;
	Vertices[Noh] = TRUE;
	Qtd++;
	
	while( Ini != Fim ){
		
		if( Qtd == NumMax )
			break;
		
		Noh = Mat[ Ini++ ];
		Max = Aresta[Noh][0];
		
		for(Cont = 1; Cont <= Max; Cont++)
			if( Vertices[ Aresta[Noh][Cont] ] == FALSE ){
				
				Mat[ Fim++ ] = Aresta[Noh][Cont];
				Vertices[ Aresta[Noh][Cont] ] = TRUE;
				Qtd++;
			}
		
	}
	
	return NumMax - Qtd;
}

int main(void){
	int Vert, Arest, X, Y, Vez = 0, Cont, Cont2;
	
	while( scanf("%d %d", &Vert, &Arest) && !( Arest == 0 && Vert == 0 ) ){
		
		Vez++;
		
		for( Cont = 0; Cont < Vert; Cont++ ){
			Arestas[Cont][0] = 0;
			ArestasB[Cont][0] = 0;
		}
	
		for( Cont = 0; Cont < Arest; Cont++){
			
			scanf("%d %d", &X, &Y);
			
			Arestas[X - 1][ ++Arestas[X - 1][0] ] = Y - 1;
			ArestasB[Y - 1][ ++ArestasB[Y - 1][0] ] = X - 1;
		}
		
		printf("Teste %d\n", Vez);
		
		memset(Vertices, FALSE, sizeof(char) * (Vert + 1) );
		
		if( Bfs( Arestas, 0, Vert) == 0 ){
			memset(Vertices, FALSE, sizeof(char) * (Vert + 1) );
			if(  Bfs( ArestasB, 0, Vert) == 0 )
				printf("S\n\n");
			else
				printf("N\n\n");
		}
		else
			printf("N\n\n");
		
	}
	
	return 0;
}