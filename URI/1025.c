#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int Comp(const void *P1, const void *P2){
	int *A = (int *)P1, *B = (int *)P2;
	
	if(*A > *B)
		return 1;
	else if(*A == *B)
		return 0;
	else
		return -1;
}

int main(){
	int Numeros[10000], cont, N, Q, Pesq, Axu=0, c;
	
	while(1){
		scanf("%d %d", &N, &Q);
		if(N + Q == 0)
			break;
	
		for(cont=0; cont < N; cont++)
			scanf("%d", &Numeros[cont]);
		
		qsort(Numeros, N, sizeof(int), Comp);
		Axu++;
		printf("CASE# %d:\n", Axu);
		
		for(cont=0; cont < Q; cont++){
			scanf("%d", &Pesq);
			
			for(c=0; c < N && Pesq != Numeros[c]; c++);
			
			if( c == N)
				printf("%d not found\n", Pesq);
			else
				printf("%d found at %d\n", Pesq, c+1);
		}
	}
	return 0;
}