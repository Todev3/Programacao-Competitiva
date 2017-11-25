#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	long long int A=0, B=0, S=0;
	int Val, Cont;
	
	scanf("%d", &Val);
	
	for(Cont=0; Cont<Val; Cont++){
		
		if(Cont == 0){
			A = 0;
			printf("%d ", A);
		}
		else if(Cont == 1){
			A = 1;
			printf("%d", A);
			}
		else{
			S = B;
			B = A + B;
			if(B > 2)
				A = S;
		
			printf(" %d", B);
		}
	}
	
	printf("\n");
	
	return 0;
}