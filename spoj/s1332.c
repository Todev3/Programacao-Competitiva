#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 110
#define MAX_ARESTAS 110
#define INFINITO 1000

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];
typedef struct{
	int Vert, Gr;
}TGrau;

int Bfs(int Noh, int Max){
	int Ini = 0, Fim = 0, Cont, Aux;
	TGrau Mat[MAX_ARESTAS];
	
	Mat[ Fim ].Gr = 0;
	Mat[ Fim++ ].Vert = Noh;
	Vertices[Noh] = TRUE; 
	
	while( Ini != Fim ){
		Aux = Ini;
		Noh = Mat[ Ini++ ].Vert;
		
		for(Cont=0; Cont < Max; Cont++)
			if( Arestas[Noh][Cont] == TRUE && Vertices[Cont] == FALSE ){
				Mat[ Fim ].Gr = Mat[ Aux ].Gr + 1;
				Mat[ Fim++ ].Vert = Cont;
				Vertices[Cont] = TRUE;
			}
		
	}
	
	return Mat[ Fim - 1 ].Gr;
}

int main(void){
	int Vert, Cont, Cont2, X, Y, Atu, Min, Aux, Caso=0;
	
	while( scanf("%d", &Vert) && !(Vert == 0) ){
		
		Min = INFINITO;
		Caso++;
		
		for(Cont = 0; Cont < Vert; Cont++)
			for(Cont2 = 0; Cont2 < Vert; Cont2++)
				Arestas[Cont][Cont2] = FALSE;
		
		for( Cont = 0; Cont < Vert-1; Cont++ ){
			scanf("%d %d", &X, &Y);
			Arestas[X - 1][Y - 1] = TRUE;
			Arestas[Y - 1][X - 1] = TRUE;
		}
		
		for(Cont = 0; Cont < Vert; Cont++){
			
			memset(Vertices, FALSE, sizeof(Vertices));
			
			Aux = Bfs( Cont, Vert);
			
			if( Aux < Min ){
				Min = Aux;
				Atu = Cont+1;
			}
			
		}
		
		printf("Teste %d\n%d\n\n", Caso, Atu);
		
	}
	
	return 0;
}