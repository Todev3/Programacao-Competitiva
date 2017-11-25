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

short int Arestas[MAX_VERTICES][MAX_VERTICES];
Tvert Vertices[MAX_VERTICES];

short int Pesq(char * A, int Max){
	int Cont;
	
	for(Cont = 0; Cont < Max && strcmp(Vertices[Cont].Nome,A) != 0 ; Cont++);
	
	return Cont;
		
}

short int Vazio(short int Max){
	short int Cont;
	
	for(Cont = 0; Cont < Max ; Cont++)
		if( Vertices[Cont].Flag == FALSE )
			return Cont;
	
	return -1;
	
}

int Bfs(int Noh){
	short int Ini = 0, Fim = 0, Qtd = 0, Cont, Max;
	short int Mat[MAX_VERTICES];
	
	Mat[Fim++] = Noh;
	Vertices[Noh].Flag = TRUE;
	Qtd++;
	
	while( Ini != Fim ){
		Noh = Mat[Ini++];
		Max = Arestas[Noh][0];
		for(Cont = 1; Cont <= Max; Cont++)
			if( Vertices[ Arestas[Noh][Cont] ].Flag == FALSE){
			
				Vertices[ Arestas[Noh][Cont] ].Flag = TRUE;
				Mat[Fim++] = Arestas[Noh][Cont];
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
	short int Vert, Ares, Cont, X, Y, Maior;
	char xNome[MAX_NOME], yNome[MAX_NOME];
	
	while( scanf("%hd %hd", &Vert, &Ares) && !(Vert == 0 && Ares == 0) ){
		
		for( Cont = 0; Cont < Vert; Cont++ ){
			scanf(" %s", Vertices[Cont].Nome);
			Vertices[Cont].Flag = FALSE;
		}
		
		qsort(Vertices, Vert, sizeof(Tvert), Comp);
		
		for(X = 0; X < Vert; X++)
				Arestas[X][0] = 0;
		
		for(Cont = 0; Cont < Ares; Cont++){
			scanf("%s %s", xNome, yNome);
			
			X = ((Tvert *)bsearch(xNome, Vertices, Vert, sizeof(Tvert), Comp)) - Vertices;
			Y = ((Tvert *)bsearch(yNome, Vertices, Vert, sizeof(Tvert), Comp)) - Vertices;
			
			Arestas[X][ ++Arestas[X][0] ] = Y;
			Arestas[Y][ ++Arestas[Y][0] ] = X;
			
		}
		
		Maior = 0;
		
		while( (X = Vazio(Vert)) != -1 ){
			Y = Bfs(X);
			if( Y > Maior)
				Maior = Y;
		}
		
		printf("%d\n", Maior);
		
	}
	
	
	return 0;
}