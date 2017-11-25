#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int A, B, Vez, Cont, P1[3], P2[3], C, i;
	char x;
	
	scanf("%d", &Vez);
	
	for(Cont=0; Cont < Vez; Cont++){
		
		for(i=0; i < 3; i++){
			P1[i] = 0;
			P2[i] = 0;
		}
		
		for(C=0; C < 2; C++){
			if(C == 0)
				scanf("%d %c %d", &A, &x, &B);
			else
				scanf("%d %c %d", &B, &x, &A);
			
			if(A >  B){					
				P1[0] += 3;
				P2[0] += 0;
				P1[1] += A - B;
				P2[1] += B - A;
			}
			else if(B > A){				
				P1[0] += 0;
				P2[0] += 3;
				P1[1] += A - B;
				P2[1] += B - A;
			}	
			else{
				P1[0] += 1;
				P2[0] += 1;
				P1[1] += 0;
				P2[1] += 0;
			}
			
			if(C == 0)
					P2[2] = B;
				else if(C == 1)
					P1[2] = A;
			
		}		
		
		for(i=0; i < 3; i++){
			
			if(P1[i] > P2[i]){
				printf("Time 1\n");
				break;
			}
			else if(P1[i] < P2[i]){
				printf("Time 2\n");
				break;
			}
			
			if(i == 2 && P1[i] == P2[i])
				printf("Penaltis\n");
			
		}
		
	}

	return 0;
}