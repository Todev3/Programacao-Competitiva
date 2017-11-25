#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 90
#define MAX_ARESTAS 5
#define INFINITO

#define TRUE 1
#define FALSE 0

int main(void){
	char Pala[MAX_ARESTAS][MAX_VERTICES];
	int Cont, Resp, P=0, U=0, i=10, L=0, Axu, Cont2;
	
	
	
	for(Cont=0; Cont < 4; Cont++)
		scanf("%s", Pala[Cont]);
	
	for(Cont=0; Cont < 4; Cont++){
		P += Pala[Cont][0] - '0';
		if(Cont != 3) P *= i;
	}
	
	Axu = strlen(Pala[0]);
	
	for(Cont=0; Cont < 4; Cont++){
		U += Pala[Cont][Axu-1] - '0';
		if(Cont != 3) U *= i;
	}
	
	for(Cont=1; Cont < Axu-1; Cont++){
		
		L = 0;
		
		for(Cont2=0; Cont2 < 4; Cont2++){
			L += Pala[Cont2][Cont] - '0';
			if(Cont2 != 3) L *= i;
		}
		
		Resp = (P * L + U) % 257;
	
		printf("%c", Resp);
	
	}
	
	printf("\n");
	
	return 0;
}