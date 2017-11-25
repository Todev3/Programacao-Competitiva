#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int N[5], Cont, Vez, C, Posi, B, E;

	while(1){
		 
		scanf("%d", &Vez);
		if(Vez == 0)
			break;
		
		for(Cont=0; Cont < Vez; Cont++){
			
			Posi = B = E = 0;
			
			for(C=0; C < 5; C++){
				scanf("%d", &N[C]);
				if(N[C] <= 127){
					Posi = C;
					E++;
				}
				else
					B++;
			}
		
			if(B == 5)
				printf("*\n");
			else if(E > 1)
				printf("*\n");
			else if(Posi == 0)
				printf("A\n");
			else if(Posi == 1)
				printf("B\n");
			else if(Posi == 2)
				printf("C\n");
			else if(Posi == 3)
				printf("D\n");
			else
				printf("E\n");
		}
		
	}

	return 0;
}