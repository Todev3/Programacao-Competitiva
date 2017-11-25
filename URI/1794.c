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
	int Val, TrcA, TrcB, Flag=TRUE;
	
	scanf("%d", &Val);
	
	scanf("%d %d", &TrcA, &TrcB);
	
	if( TrcA > Val || Val > TrcB)
		Flag = FALSE;
	
	scanf("%d %d", &TrcA, &TrcB);
	
	if( TrcA > Val || Val > TrcB)
		Flag = FALSE;
	
	if( Flag == TRUE )
		printf("possivel\n");
	else
		printf("impossivel\n");
	
	return 0;
}