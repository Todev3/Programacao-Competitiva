#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	unsigned long long int V[62];
	int Cont, Entra, C, Val;
	
	scanf("%d", &Entra);
	
	for(Cont=0; Cont < Entra; Cont++){
		
		
		
		scanf("%d", &Val);
		
		for(C=0; C <= Val; C++){

			if(C == 0)
				V[0] = 0;
			if(C == 1)
				V[1] = 1;
		
			if(C != 0 && C != 1)
				V[C] = V[C - 2] + V[C - 1];
			
			
		}
		
		printf("Fib(%d) = %llu\n", C-1, V[C - 1]);
		
	}
	
	return 0;
}