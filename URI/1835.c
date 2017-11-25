#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 110
#define MAX_ARESTAS 110
#define INFINITO

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];

int Dfs(int Noh, int Max){
	int Cont;
	
	Vertices[Noh] = TRUE;
	
	for(Cont = 0; Cont < Max; Cont++)
		if( Arestas[Noh][Cont] == TRUE && Vertices[Cont] == FALSE )
			Dfs(Cont, Max);
	
}

int Vazio(int Max){
	int Cont;
	
	for(Cont = 0; Cont < Max; Cont++)
		if( Vertices[Cont] == FALSE)
			return Cont;
		
	return -1;
}

int main(void){
	int Vezes, ContVezes, X, Y, Aux, Vert, Arest, Cont;
	
	scanf("%d", &Vezes);
	
	for(ContVezes = 0; ContVezes < Vezes; ContVezes++){
		
		scanf("%d %d", &Vert, &Arest);
		
		for(Cont = 0; Cont < Vert; Cont++)
			for(Aux = 0; Aux < Vert; Aux++)
				Arestas[Cont][Aux] = FALSE;
		
		for(Cont = 0; Cont < Arest; Cont++){
			
			scanf("%d %d", &X, &Y);
			
			Arestas[X - 1][Y - 1] = TRUE;
			Arestas[Y - 1][X - 1] = TRUE;
			
		}
		
		Aux = 0;
		
		memset(Vertices, FALSE, sizeof(Vertices));
		
		while( ( X = Vazio(Vert) ) != -1 ){
			
			Dfs(X, Vert);
			Aux++;
		
		}
		
		if( (Aux - 1) == 0 )
			printf("Caso #%d: a promessa foi cumprida\n", ContVezes+1);
		else
			printf("Caso #%d: ainda falta(m) %d estrada(s)\n", ContVezes+1, Aux-1);
		
	}
	
	return 0;
}