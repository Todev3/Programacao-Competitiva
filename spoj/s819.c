#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 60
#define MAX_ARESTAS 2600
#define INFINITO

#define TRUE 1
#define FALSE 0

typedef struct{
	int Vrt, Gra;
}TVert;

char Vertices[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];

int Bfs(int Noh, int Max, int Grau){
	int Ini = 0, Fim = 0, Cont, Aux;
	TVert Mat[MAX_ARESTAS];
	
	Mat[ Fim ].Gra = 0;
	Mat[ Fim++ ].Vrt = Noh;
	Vertices[Noh] = TRUE;
	
	while( Ini != Fim ){
		
		if( Mat[ Ini ].Gra == Grau )
			break;
		
		Aux = Ini;
		Noh = Mat[ Ini++ ].Vrt;
		
		for(Cont = 0; Cont < Max; Cont++)
			if( Arestas[Noh][Cont] == TRUE && Vertices[Cont] == FALSE){
				
				Mat[ Fim ].Gra = Mat[ Aux ].Gra + 1;
				Mat[ Fim++ ].Vrt = Cont;
				Vertices[Cont] = TRUE;		
			}
	}
	
}

int main(void){
	int Vert, Arest, CidAtu, GrauMax, X, Y, Lin, Col, Vez = 0;
	
	while( scanf("%d %d %d %d", &Vert, &Arest, &CidAtu, &GrauMax) && !( Vert == 0 && Arest == 0 && CidAtu == 0 && GrauMax == 0)){
		
		Vez++;
		
		for(Lin = 0; Lin < Vert; Lin++)
			for(Col = 0; Col < Vert; Col++)
				Arestas[Lin][Col] = FALSE;
			
		for(Lin = 0; Lin < Arest; Lin++){
			
			scanf("%d %d", &X, &Y);
			
			Arestas[X - 1][Y - 1] = TRUE;
			Arestas[Y - 1][X - 1] = TRUE;
			
		}
		
		memset(Vertices, FALSE, sizeof(char) * (Vert + 1));
		
		Bfs(CidAtu - 1, Vert, GrauMax);
		
		printf("Teste %d\n", Vez);
		
		X = FALSE;
		
		for(Lin = 0; Lin < Vert; Lin++){
			if( Vertices[Lin] == TRUE && (Lin != CidAtu - 1) ){
				if(X != FALSE)
					printf(" ");
				printf("%d", Lin+1);
				X = TRUE;
			}
		}
		
		printf("\n\n");
		
	}
	
	return 0;
}