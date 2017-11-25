#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 600
#define MAX_ARESTAS (70 * 1005)
#define INFINITO 10000

#define TRUE 1
#define FALSE 0

typedef struct{
	char A, Marc;
}VertP;

VertP Vertices[MAX_VERTICES];

char Arestas[MAX_VERTICES][MAX_VERTICES];

void Trocar(int X, int Y, int Max){
	int Cont;
	char Aux;
	
	Max = Max + 10;
	
	for(Cont = 0; Cont < Max; Cont++){
		
		if( Arestas[Cont][X] == TRUE || Arestas[Cont][Y] == TRUE ){
			
			Aux = Arestas[Cont][X];
			Arestas[Cont][X] = Arestas[Cont][Y];
			Arestas[Cont][Y] = Aux;
			
		}
	}
	
	for(Cont = 0; Cont < Max; Cont++){
		
		if( Arestas[X][Cont] == TRUE || Arestas[Y][Cont] == TRUE){
			
			Aux = Arestas[X][Cont];
			Arestas[X][Cont] = Arestas[Y][Cont];
			Arestas[Y][Cont] = Aux;
			
		}
	}
	
}

int Resp(int Pesq, int Val,int Max){
	int Cont = 0, Ini = 0, Fim = 0;
	int Fila[MAX_ARESTAS];
	
	Fila[Fim++] = Pesq;
	Vertices[Pesq].Marc = TRUE;
	
	while( Ini != Fim ){
		
		Pesq = Fila[Ini++];
		
		for(Cont = 0; Cont < Max; Cont++){
			if( Arestas[Pesq][Cont] == TRUE && Vertices[Cont].Marc == FALSE ){
				
				Fila[Fim++] = Cont;
				Vertices[Cont].Marc = TRUE;
				if( Val > Vertices[Cont].A )
					Val = Vertices[Cont].A;
			}
		}
		
		if( Val == 1 )
			break;
	}
	
	return Val;
	
}

int main(void){
	int Vert, Arests, I, Cont, X, Y, Cont2;
	char Func;
	
	while( scanf("%d %d %d", &Vert, &Arests, &I) != EOF){
		
		memset( Arestas, FALSE, sizeof(Arestas) );
	
		for(Cont = 0; Cont < Vert; Cont++){
			scanf("%d", &Vertices[Cont].A);
			Vertices[Cont].Marc = FALSE;
		}
		
		for(Cont = 0;  Cont < Arests; Cont++){
			scanf("%d %d", &X, &Y);
			Arestas[Y - 1][X - 1] = TRUE;
		}
		
		for(Cont = 1; Cont <= I; Cont++){
			
			for(Cont2 = 0; Cont2 < Vert; Cont2++){
				Vertices[Cont2].Marc = FALSE;
			}
			
			scanf(" %c", &Func);
			
			if( Func == 'T'){
				scanf("%d %d", &X, &Y);
				Trocar(X - 1, Y - 1, Vert);
			}
			else{
				scanf("%d", &X);
				X = Resp(X-1, INFINITO,Vert);
			
				if( X != INFINITO)
					printf("%d\n", X);
				else
					printf("*\n");
			}

		
		}
	}
	return 0;
}