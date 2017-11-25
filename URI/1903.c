#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 100005
#define MAX_ARESTAS 1000000

#define TRUE 1
#define FALSE 0

char Vertices[MAX_VERTICES];

int main(void){
	int Cont, Cont2, Arest, Vert, X, Y, Aux;;
	char Flag;
	
	while( scanf("%d %d", &Vert, &Arest) != EOF ){
		
		for( Cont = 0; Cont < Vert; Cont++)
			Vertices[Cont] = FALSE;
		
		for( Cont = 0; Cont < Arest; Cont++){
			scanf("%d %d", &X, &Y);
			Vertices[X - 1] = TRUE;
		}
		
		Aux = 0;
		
		for( Cont = 0; Cont < Vert; Cont++)
			if( Vertices[Cont] == TRUE )
				Aux++;
		
		if( Aux == Vert )
			printf("Bolada\n");
		else
			printf("Nao Bolada\n");
		
	}
	
	return 0;
}