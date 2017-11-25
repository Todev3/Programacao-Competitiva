#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 4050
#define MAX_ARESTAS 5050
#define INFINITO 500000
#define MAX_TAM 1050

#define TRUE 1
#define FALSE 0

typedef struct{
	char Flag, Nome[MAX_TAM];
}TVert;

TVert Vertice[MAX_VERTICES];
int Arestas[MAX_VERTICES][MAX_VERTICES];

int Dijkstra(int iQtVert, int iOrigem, int iDestino){
	int iDistancias[MAX_ARESTAS];
	int iLin, iCol, iMenor, iProx;
	
	for(iLin = 0; iLin < iQtVert; iLin++)
		iDistancias[iLin] = INFINITO;
	
	iDistancias[iOrigem] = 0;
	
	for(iLin = 0; iLin < iQtVert; iLin++){
		iMenor = INFINITO;
		
		for(iCol = 0; iCol < iQtVert; iCol++){
			if(Vertice[iCol].Flag == FALSE && iDistancias[iCol] < iMenor){
				iMenor = iDistancias[iCol];
				iProx = iCol;
			}
		}
		
		Vertice[iProx].Flag = TRUE;
		
		for(iCol = 0; iCol < iQtVert; iCol++)
			if(Arestas[iProx][iCol] != INFINITO)
				if( iDistancias[iProx] + Arestas[iProx][iCol] < iDistancias[iCol] )
					iDistancias[iCol] = iDistancias[iProx] + Arestas[iProx][iCol];
	}
	
	return iDistancias[iDestino];
}

int main(void){
	int Cont, Cont2, X, Y, Vert, Arest, VerMax, Entra, Sai, Dest;
	char NoA[MAX_TAM], NoB[MAX_TAM];
	
	while( scanf("%d %d", &Vert, &Arest) != EOF ){
		
		VerMax = 0;
		
		for(Cont = 0; Cont < Vert; Cont++)
			for(Cont2 = 0; Cont2 < Vert; Cont2++)
				Arestas[Cont][Cont2] = INFINITO;
			
		for(Cont = 0; Cont < Arest; Cont++){
			
			scanf("%s %s", NoA, NoB);
			
			for(Cont2 = 0; Cont2 < VerMax && strcmp(NoA, Vertice[Cont2].Nome) != 0; Cont2++);
			if( Cont2 == VerMax){
				X = VerMax;
				strcpy( Vertice[ VerMax++ ].Nome, NoA );
			}
			else
				X = Cont2;
			
			for(Cont2 = 0; Cont2 < VerMax && strcmp(NoB, Vertice[Cont2].Nome) != 0; Cont2++);
			if( Cont2 == VerMax){
				Y = VerMax;
				strcpy( Vertice[ VerMax++ ].Nome, NoB );
			}
			else
				Y = Cont2;
			
			Arestas[X][Y] = 1;
			Arestas[Y][X] = 1;
		
		}
		
		for(Cont2 = 0; Cont2 < VerMax && strcmp("Saida", Vertice[Cont2].Nome) != 0; Cont2++);
		Sai = Cont2;
		
		for(Cont2 = 0; Cont2 < VerMax && strcmp("Entrada", Vertice[Cont2].Nome) != 0; Cont2++);
		Entra = Cont2;
		
		for(Cont2 = 0; Cont2 < VerMax && strcmp("*", Vertice[Cont2].Nome) != 0; Cont2++);
		Dest = Cont2;
		
		X = 0;
		
		for(Cont = 0; Cont < VerMax; Cont++)
			Vertice[Cont].Flag = FALSE;
		
		X += Dijkstra(VerMax, Sai, Dest);
		
		for(Cont = 0; Cont < VerMax; Cont++)
			Vertice[Cont].Flag = FALSE;
		
		X += Dijkstra(VerMax, Entra, Dest);
		
		printf("%d\n", X);
		
	}
	
	return 0;
}