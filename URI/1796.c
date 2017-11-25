#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 
#define MAX_ARESTAS 
#define INFINITO

#define TRUE 1
#define FALSE 0

int main(void){
	int Sim, Nao, Vez, Cont, Va;
	
	scanf("%d", &Vez);
	
	Sim = Nao = 0;
	
	for(Cont=0; Cont < Vez; Cont++){
		scanf("%d", &Va);
		if(Va == 1)
			Nao++;
		else
			Sim++;
	}
	
	if( Nao >= Sim)
		printf("N\n");
	else
		printf("Y\n");
	
	
	return 0;
}