#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 300
#define MAX_ARESTAS

#define TRUE 1
#define FALSE 0

typedef struct{
	int Peso, X, Y;
}TValores;

TValores MatValores[MAX_VERTICES];
int vertices[MAX_VERTICES];

int kruskal(int qtVertices, int qtArestas){
		
	int comp(const void * p1, const void * p2){
		TValores *i = (TValores *)p1, *j = (TValores *)p2;
			
		if( i->Peso > j->Peso )
			return 1;
		else
			if( i->Peso < j->Peso )
				return -1;
			else
				return 0;
	}
		
	int i, j, grupo1, grupo2;
	int custoTotal;
	
	qsort(MatValores, qtArestas, sizeof(TValores), comp);
	
	
	custoTotal = 0;
	
	for(i = 0; i < qtVertices; i++)
		vertices[i] = i + 1;
	
	for(i = 0; i <qtArestas; i++){
		if( vertices[ MatValores[i].X -1 ] != vertices[ MatValores[i].Y - 1] ){
			custoTotal += MatValores[i].Peso;
			
			if( vertices[ MatValores[i].X - 1] < vertices[ MatValores[i].Y - 1]){
				grupo1 = vertices[ MatValores[i].X - 1 ];
				grupo2 = vertices[ MatValores[i].Y - 1 ];
			}
			else{
				grupo1 = vertices[ MatValores[i].Y - 1 ];
				grupo2 = vertices[ MatValores[i].X - 1 ];
			}
			
			for(j = 0; j < qtVertices; j++)
				if(vertices[j] == grupo2)
					vertices[j] = grupo1;
			
		}
	}
	
	return custoTotal;

}

int main(void){
	int Vert, Arest, iX, iY, iPeso, iCont;
	
	while( scanf("%d %d", &Vert, &Arest) != EOF ){
		
		for( iCont=0; iCont < Arest; iCont++){
			
			scanf("%d %d %d", &iX, &iY, &iPeso);
			
			MatValores[ iCont ].X = iX;
			MatValores[ iCont ].Y = iY;
			MatValores[ iCont ].Peso = iPeso;
			
		}
		
		
		printf("%d\n", kruskal( Vert, Arest));
		
	}
	
	return 0;
}