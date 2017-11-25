#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

long long int Mod;

int Comp(const void *P1, const void *P2){
	
	long long int *A =(long long int *)P1, *B=(long long int *)P2, C, D;

	if(*A%Mod >	*B%Mod)//ordernar pelo menor mod
		return 1;
		
	else if(*A%Mod < *B%Mod)//ordernar pelo menor mod
		return -1;
		
	else{
		C = *A%2;
		D = *B%2;
		
		if(*A%2 < 0)//corrir resultado de mod por 2 quando numero for negativo para evitar erro de ordenação, sempre impares
				C = *A%2 * -1;
		if(*B%2 < 0)
				D = *B%2 * -1;
		
		
		if(C > D)//ordenar por par e impar
			return -1;
		else if(C < D)//ordenar por par e impar
			return 1;
			
		else{
			
			if(*A%2 == 1 || *A%2 == -1){//ordenar po ordem numerica
				if(*A > *B)
					return -1;
				else if(*A == *B)//ordenar po ordem numerica
					return 0;
				else
					return 1;
			}
			else{
				
				if(*A > *B)//ordenar po ordem numerica
					return 1;
				else if(*A == *B)//ordenar po ordem numerica
					return 0;
				else
					return -1;
			}
			
		}
			
	}


}

int main(){
	long long int Num[10005];
	int N, cont;
	
	while(1){
		scanf("%d %d", &N, &Mod);
		if(N + Mod == 0){
			printf("0 0\n");
			break;
		}
		
		for(cont=0; cont < N; cont++)
			scanf("%lld", &Num[cont]);
			
		qsort(Num, N, sizeof(long long int), Comp);
		
		printf("%d %d\n", N, Mod);
		
		for(cont=0; cont < N; cont++)
			printf("%lld\n", Num[cont]);
	}
	
	return 0;
}