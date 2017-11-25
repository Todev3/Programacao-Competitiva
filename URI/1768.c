#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 110

int main(){
	int X, C, Cc, A, B, U;
	
	while(scanf("%d", &X) != EOF){
		
		A = (X / 2) + 1;
		B = A;
		U = 2;
		for(C=0; C < A; C++){
			for(Cc=0; Cc < B; Cc++){
				if(Cc <= B - U)
					printf(" ");
				else
					printf("*");
			}
			B++;
			U +=2;
			printf("\n");
		}
		
		A = (X / 2) + 1;
		B = A;
		U = 2;
		
		for(C=0; C < 2; C++){
			for(Cc=0; Cc < B; Cc++){
				if(Cc <= B - U)
					printf(" ");
				else
					printf("*");
			}
			B++;
			U +=2;
			printf("\n");
		}
		
		printf("\n");
		
	}

	return 0;
}