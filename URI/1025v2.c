#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int Comp(const void *P1, const void *P2){
	int *A = (int *)P1, *B = (int *)P2;
	
	if(*A > *B)
		return 1;
	else if(*A < *B)
		return -1;
	else
		return 0;
}

int CompB(const void *P1, const void *P2){
	int *A = (int *)P1, *B = (int *)P2;
	
	if(*A > *B)
		return 1;
	else if(*A < *B)
		return -1;
	else if(*A == *B && *(B-1) == *A)
		return -1;
	else
		return 0;
}

int main(){
	int Numeros[10000], cont, N, Q, Pesq, Axu=0, c, * Resp, R;
	
	Numeros[0] = -1;
	
	while(1){
		
		scanf("%d %d", &N, &Q);
		if(N + Q == 0)
			break;
	
		for(cont=1; cont <= N; cont++)
			scanf("%d", &Numeros[cont]);
		
		qsort(&Numeros[1], N, sizeof(int), Comp);
		Axu++;
		
		for(c = 0; c < Q; c++){
			
			scanf("%d", &Pesq);		
			Resp = (int *) bsearch(&Pesq, &Numeros[1], N, sizeof(int), CompB);
			
			if(c == 0)
				printf("CASE# %d:\n", Axu);
			
			if( Resp == NULL)
				printf("%d not found\n", Pesq);
			else{
				R = Resp - Numeros;
				printf("%d found at %d\n", Pesq, R);
			}
		}
	}
	return 0;
}