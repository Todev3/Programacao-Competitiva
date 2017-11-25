#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 5050
#define MAX_ARESTAS 5050
#define INFINITO
#define MAX_NOME 40

#define TRUE 1
#define FALSE 0

typedef struct{
	char Nome[MAX_NOME], Flag;
}Tvert;

char Arestas[MAX_VERTICES][MAX_VERTICES];
Tvert Vertices[MAX_VERTICES];

int Pesq(char * A, int Max){
	int Cont;
	
	for(Cont = 0; Cont < Max && strcmp(Vertices[Cont].Nome,A) != 0 ; Cont++);
	
	return Cont;
		
}

int Vazio(int Max){
	int Cont;
	
	for(Cont = 0; Cont < Max ; Cont++)
		if( Vertices[Cont].Flag == FALSE )
			return Cont;
	
	return -1;
	
}

int Bfs(int Noh, int Max){
	int Ini = 0, Fim = 0, Qtd = 0, Cont;
	int Mat[MAX_VERTICES];
	
	Mat[Fim++] = Noh;
	Vertices[Noh].Flag = TRUE;
	Qtd++;
	
	while( Ini != Fim ){
		Noh = Mat[Ini++];
		for(Cont = 0; Cont < Max; Cont++)
			if( Arestas[Noh][Cont] == TRUE && Vertices[Cont].Flag == FALSE){
			
				Vertices[Cont].Flag = TRUE;
				Mat[Fim++] = Cont;
				Qtd++;
			}	
	}
	
	return Qtd;
	
}

int Comp(const void *P1, const void *P2){
	Tvert *A = (Tvert *)P1, *B = (Tvert *)P2;
	
	return strcmp(A->Nome,B->Nome);
	
}

int main(void){
	int Vert, Ares, Cont, X, Y, Maior;
	char xNome[MAX_NOME], yNome[MAX_NOME];
	
	while( scanf("%d %d", &Vert, &Ares) && !(Vert == 0 && Ares == 0) ){
		
		for( Cont = 0; Cont < Vert; Cont++ ){
			scanf(" %s", Vertices[Cont].Nome);
			Vertices[Cont].Flag = FALSE;
		}
		
		qsort(Vertices, Vert, sizeof(Tvert), Comp);
		
		for(X = 0; X < Vert; X++)
			for(Y = 0; Y < Vert; Y++)
				Arestas[X][Y] = FALSE;
		
		for(Cont = 0; Cont < Ares; Cont++){
			scanf("%s %s", xNome, yNome);
			
			X = ((Tvert *)bsearch(xNome, Vertices, Vert, sizeof(Tvert), Comp)) - Vertices;
			Y = ((Tvert *)bsearch(yNome, Vertices, Vert, sizeof(Tvert), Comp)) - Vertices;
			
			Arestas[X][Y] = TRUE;
			Arestas[Y][X] = TRUE;
			
		}
		
		Maior = 0;
		
		while( (X = Vazio(Vert)) != -1 ){
			Y = Bfs(X, Vert);
			if( Y > Maior)
				Maior = Y;
		}
		
		printf("%d\n", Maior);
		
	}
	
	
	return 0;
}