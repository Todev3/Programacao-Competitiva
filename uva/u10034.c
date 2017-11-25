#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES
#define MAX_ARESTAS 105

#define TRUE 1
#define FALSE 0
#define INFINITO 1000000000.0

float Arestas[MAX_ARESTAS][MAX_ARESTAS];
char vertices[MAX_ARESTAS];

typedef struct{
	float X, Y;
}TPontos;

float prim(short int v, short int qtVertices){
	int q, i, j, v1, v2;
	float menorCusto, CustoTotal=0;
	
	vertices[v] = TRUE;
	q = 1;
	
	while(q < qtVertices){
		menorCusto = INFINITO;
		for(i = 0;  i< qtVertices; i++)
			if(vertices[i] == TRUE){
				for(j = 0; j <qtVertices; j++)
					if(Arestas[i][j] < menorCusto && vertices[j] == FALSE){
						v1 = i;
						v2 = j;
						menorCusto = Arestas[i][j];
					}
			}
			
		vertices[v2] = TRUE;
		q++;
		CustoTotal += menorCusto;
	
	}
	
	return CustoTotal;
	
}

int main(void){
	TPontos Pontos[MAX_ARESTAS];
	int Cont, Vez, ContVez, Noh, Lin, Col, Flag;
	float Resp;
	
	scanf("%d", &Vez);
	
	Flag = FALSE;
	
	for(ContVez=0; ContVez < Vez; ContVez++){
	
		scanf("%d", &Noh);
		
		for(Lin=0; Lin < Noh; Lin++)
			for(Col=0; Col < Noh; Col++)
				Arestas[Lin][Col] = INFINITO;
		
		for(Cont=0; Cont < Noh; Cont++)
			scanf("%f %f", &Pontos[Cont].X, &Pontos[Cont].Y);
		
		for(Lin=0; Lin < Noh; Lin++)
			for(Col=0; Col < Noh; Col++)
				if(Col != Lin)
					Arestas[Lin][Col] = sqrt( ( pow( Pontos[Lin].X - Pontos[Col].X, 2 ) + pow( Pontos[Lin].Y - Pontos[Col].Y, 2) ) );
		
		for(Col=0; Col < Noh; Col++)
			vertices[Col] = FALSE;
		
		Resp = prim(0, Noh);
		
		if(Flag == TRUE)
			printf("\n");
		
		Flag = TRUE;
		
		printf("%.2f\n", Resp);
		
	}
	
	return 0;
}