//antigo 0.056 || novo 0.080
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int Comp(const void *P1, const void *P2){
	int *A = (int *)P1, *B = (int *)P2;
	
	if( *A%2 > *B%2 )
		return 1;
	else if( *A%2 < *B%2)
		return -1;
	else if(*A%2 == 0){
		
		if( *A > *B )
			return 1;
		else if( *A < *B )
			return -1;
		else
			return 0;
	}
	else{		
		if( *A < *B )
			return 1;
		else if( *A > *B )
			return -1;
		else
			return 0;
	}
	
}

int main(){
	int Vetor[100000], Cont, N, Q;


	
	scanf("%d", &N);
	for(Cont=0; Cont < N; Cont++)
		scanf("%d", &Vetor[Cont]);
		
		
	qsort(Vetor, N, sizeof(int), Comp);

	for(Cont=0; Cont < N; Cont++)
			printf("%d\n", Vetor[Cont]);

	return 0;
}