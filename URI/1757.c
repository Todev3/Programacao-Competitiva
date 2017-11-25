#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 200
#define MAX_ARESTAS ( (101 * 101) / 2)
#define INFINITO

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];

int Bfs(int Noh, int Max){
	int Ini = 0, Fim = 0, Cont;
	int Fila[MAX_VERTICES + 1];
	
	Fila[ Fim++ ] = Noh;
	Vertices[Noh] = TRUE;

	while( Ini != Fim ){ 
		Noh = Fila[ Ini++ ];
		for(Cont = 0; Cont < Max; Cont++)
			if( Arestas[Noh][Cont] == TRUE && Vertices[Cont] == FALSE ){
				Fila[ Fim++ ] = Cont;
				Vertices[Cont] = TRUE;
			}
	}
	
	return 0;
	
}

int Vazio(int Max){
	int Cont;
	
	for(Cont = 0; Cont < Max; Cont++)
		if( Vertices[Cont] == FALSE )
			return Cont;
		
	return -1;
	
}

int main(void){
	int X, Y, Cont, Cont2, Vez, Vert, Arest, Qtd;;
	
	scanf("%d", &Vez);
	
	while( Vez-- ){
		
		Qtd = 0;
		
		scanf("%d %d", &Vert, &Arest);
		
		for(Cont = 0; Cont < Vert; Cont++)
			for(Cont2 = 0; Cont2 < Vert; Cont2++)
				Arestas[Cont][Cont2] = TRUE;
			
		for(Cont = 0; Cont < Arest; Cont++){
			
			scanf("%d %d", &X, &Y);
			
			Arestas[X][Y] = FALSE;
			Arestas[Y][X] = FALSE;
			
		}
			
		memset(Vertices, FALSE, sizeof(char) * Vert + 1);
		
		while( (X = Vazio(Vert)) != -1 ){
			
			Bfs(X, Vert);
			Qtd++;
			
		}
		
		printf("%d\n", Qtd-1);
		
	}
	
	return 0;
}