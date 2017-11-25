#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define TREU 1
#define FALSE 0
#define MAX 5

int Comp( const void * P1, const void * P2){
	long long int *A= (long long int *)P1, *B= (long long int *)P2;
	
	if( *A > *B )
		return 1;
	else if( *A < *B )
		return -1;
	else
		return 0;
}

int MDC(int A, int B){
	if( B == 0)
		return A;
	else
		MDC(B, A%B);
}

int main(){
	int Num[MAX], Cont, Aux, Cont2;
	
	while( scanf("%d %d %d", &Num[0], &Num[1], &Num[2]) != EOF ){
		
		for(Cont = 0; Cont < 3; Cont++){
			for(Cont2 = 0; Cont2 < 2; Cont2++){
				if( Num[Cont2] < Num[Cont2 + 1 ] ){
					Aux = Num[Cont2];
					Num[Cont2] = Num[Cont2 + 1];
					Num[Cont2 + 1] = Aux;
				}
			}
		}

		if( pow(Num[0], 2) == pow(Num[1],2) + pow(Num[2],2) ){
			if( MDC(MDC(Num[0], Num[1]), Num[2]) == 1 )
				printf("tripla pitagorica primitiva\n");
			else
				printf("tripla pitagorica\n");
		}
		else
			printf("tripla\n");
		
	}
	
	return 0;
}