#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 110
#define MAX_ARESTAS  5000
#define INFINITO

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES], Arestas[MAX_VERTICES][MAX_VERTICES];

int Dfs(int Noh, int Max){
	int Ini  = 0, Fim = 0, Cont, Qtd = 0;
	int Mat[MAX_ARESTAS];
	
	Mat[ Fim++ ] = Noh;
	Vertices[Noh] = TRUE;
	Qtd++;
	
	while( Ini != Fim ){
		Noh = Mat[ Ini++ ];
		for(Cont = 0; Cont < Max; Cont++)
			if( Arestas[Noh][Cont]	== TRUE && Vertices[Cont] == FALSE){
				Mat[ Fim++ ] = Cont;
				Vertices[Cont] = TRUE;
				Qtd++;
			}
	}
	
	return Qtd;
}

int main(void){
	int Vert, Cont, Num, Lim, Cont2, Ant, Val, Aux;
	
	while( scanf("%d", &Vert) && !(Vert == 0) ){
		
		for(Cont = 0; Cont < Vert; Cont++)
			for(Cont2 = 0; Cont2 < Vert; Cont2++)
				Arestas[Cont][Cont2] = FALSE;
		
		for(Cont = 0; Cont < Vert; Cont++){
			
			scanf("%d", &Lim);
			
			for(Cont2 = 0; Cont2 < Lim; Cont2++){
				scanf("%d", &Num);
				Arestas[Cont][Num - 1] = TRUE;
			}
		
		}
		
		Val = 0;
		
		for( Cont = 0; Cont < Vert; Cont++){
			
			memset( Vertices, FALSE, sizeof(Vertices) );
			Num = Dfs(Cont, Vert);
			
			if(Num > Val){
				Val = Num;
				Ant = Cont;	
			}

		}
		
		printf("%d\n", Ant+1);
		
	}
	
	
	return 0;
}