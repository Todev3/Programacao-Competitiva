#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 1005

#define TRUE 1
#define FALSE 0

int Comp(const void * P1, const void * P2){
	int * A = (int *)P1, * B = (int *)P2;
	
	if(*A > *B)
		return -1;
	else if(*A < *B)
		return 1;
	else
		return 0;
	
}

int main(void){
	int Vez, ContVez, ContAlu, Alu, Dif;
	int NotaAlu[MAX_TAM], AxuAlu[MAX_TAM];
	
	scanf("%d", &Vez);
	
	for(ContVez=0; ContVez < Vez; ContVez++){

		scanf("%d", &Alu);
		
		for( ContAlu=0; ContAlu < Alu; ContAlu++){
			scanf("%d", &NotaAlu[ContAlu]);
			AxuAlu[ContAlu] = NotaAlu[ContAlu];
		}
		
		qsort(NotaAlu, Alu, sizeof(int), Comp);
		
		Dif = 0;
		
		for(ContAlu = 0; ContAlu < Alu; ContAlu++)
			if( NotaAlu[ContAlu] != AxuAlu[ContAlu] )
				Dif++;
		
		printf("%d\n", Alu - Dif);
		
	}
	
	return 0;
}