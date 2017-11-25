#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 1999005
#define MAX_ARESTAS 2050

#define TRUE 1
#define FALSE 0

char Vertices[MAX_ARESTAS];
char Arestas[MAX_ARESTAS][MAX_ARESTAS], ArestasEsp[MAX_ARESTAS][MAX_ARESTAS];

int Bfs(char Ma[MAX_ARESTAS][MAX_ARESTAS],int Ver){
	int Ini = 0, Fim = 0, Cont, Max = 0, Cont2;
	int Fila[MAX_ARESTAS];
	
	Fila[Ini++] = 0;
	Vertices[0] = TRUE;
	Max++;
	
	while( Ini != Fim ){
		
		Cont = Fila[Fim++];
		
		for(Cont2=0; Cont2 < Ver; Cont2++)
			if( Ma[Cont][Cont2] == TRUE && Vertices[Cont2] == FALSE){
				
				Vertices[Cont2] = TRUE;
				Fila[Ini++] = Cont2;
				Max++;	
			}
		
	}

	if( Max == Ver )
		return 1;
	else
		return 0;
}

int main(void){
	int Ver, Are, Cont, X, Y, Dir;
	
	while( scanf("%d %d", &Are, &Ver) && !(Ver == 0 && Are == 0) ){
		
		memset(Arestas, FALSE, sizeof(Arestas));
		memset(ArestasEsp, FALSE, sizeof(ArestasEsp));
		
		for(Cont=0; Cont < Ver; Cont++){
			
			scanf("%d %d %d", &X, &Y, &Dir);
			
			if( Dir == 2 ){
				
				Arestas[X - 1][Y - 1] = TRUE;
				Arestas[Y - 1][X - 1] = TRUE;
				
				ArestasEsp[X - 1][Y - 1] = TRUE;
				ArestasEsp[Y - 1][X - 1] = TRUE;
				
			}
			else{
				
				Arestas[X - 1][Y - 1] = TRUE;
				ArestasEsp[Y - 1][X - 1] = TRUE;
				
			}
		}
		
		memset(Vertices, FALSE, sizeof(Vertices));
		
		if( Bfs( Arestas, Are) == 1 ){
			memset(Vertices, FALSE, sizeof(Vertices));
			if( Bfs( ArestasEsp, Are) == 1 ){
				printf("1\n");
			}
			else
				printf("0\n");
		}
		else
			printf("0\n");
			
	}
	
	return 0;
}