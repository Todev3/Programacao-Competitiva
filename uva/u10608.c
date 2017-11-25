#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 30010
#define MAX_ARESTAS 500010
#define INFINITO

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];

int Bfs(int Noh, int Limit){
	short int Ini = 0, Fim = 0, Cont, Qtd = 0;
	short int Mat[MAX_VERTICES];
	
	Mat[Fim++] = Noh;
	Vertices[Noh] = TRUE;
	Qtd++;
	
	while( Ini != Fim ){
		Noh = Mat[Ini++];
		for(Cont = 0; Cont < Limit; Cont++ )
			if( Arestas[Noh][Cont] && Vertices[Cont] == FALSE ){
				
				Mat[Fim++] = Cont;
				Vertices[Cont] = TRUE;
				Qtd++;
			
			}
	}
	
	return Qtd;
	
}

int Livre(int Max){
	int Cont;
	
	for(Cont = 0; Cont < Max; Cont++)
		if( Vertices[Cont] == FALSE )
			return Cont;
	
	return -1;
	
}

int main(void){
	int Vez, X, Y, Vert, Ares, Cont, Maior, Lin, Col;
	
	scanf("%d", &Vez);
	
	while( Vez-- ){
		
		scanf("%d %d", &Vert, &Ares);
		
		memset(Vertices, FALSE, (sizeof(char) * Vert) + 5 );
		
		for(Lin = 0; Lin < Vert; Lin++)
			for(Col = 0; Col < Vert; Col++)
				Arestas[Lin][Col] = FALSE;
		
		for( Cont = 0; Cont < Ares; Cont++ ){
			
			scanf("%d %d", &X, &Y);
			
			Arestas[X - 1][Y - 1] = TRUE;
			Arestas[Y - 1][X - 1] = TRUE;
			
		}
		
		
		Maior = 0;
		while( (X = Livre(Vert)) != -1 ){
			Y = Bfs(X, Vert);
			if( Maior < Y )
				Maior = Y;
		}
		
		printf("%d\n", Maior);
		
	}
	
	return 0;
}