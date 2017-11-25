#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int R, A, B, C, D, E, Cont; 

	E=0;	
		
	while(1){
		E++;
		D = 0;
		C = 0;
		
		scanf("%d", &R);
		if(R == 0)
			break;
			
		for(Cont=0; Cont < R; Cont++){
			
			scanf("%d %d", &A, &B);
			
			C += A;
			D += B;
			
		}
		
		printf("Teste %d\n", E);
		
		if(C > D)
			printf("Aldo\n");
		else
			printf("Beto\n");
		
		printf("\n");
		
	}
	
	return 0;
}