#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 
#define MAX_ARESTAS 10050
#define INFINITO

#define TRUE 1
#define FALSE 0

int main(void){
	int NumEscri, Tests, Cont, Cont2, Escri[MAX_ARESTAS], Atu;
	
	scanf("%d %d", &Tests, &NumEscri);
	
	for(Cont=0; Cont < NumEscri; Cont++)
		scanf("%d", &Escri[Cont]);
	
	
	for(Cont=0; Cont < Tests; Cont++){
		
		scanf("%d", &Atu);
		
		for(Cont2 = 0; Cont2 < NumEscri && Escri[Cont2] != Atu; Cont2++);
		
		
		if( Cont2 != NumEscri )
			printf("0\n");
		else{
			printf("1\n");
			Escri[NumEscri++] = Atu;
		}
		
		
	}
	
	return 0;
}