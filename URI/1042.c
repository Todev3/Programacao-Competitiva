#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A[3], B[3], a, b, c;
	scanf("%d %d %d", &A[0], &A[1], &A[2]);
	
	a = 0;
	
	B[0] = A[0];
	B[1] = A[1];
	B[2] = A[2];
	
	while(a < 2){
		
		for(b=0; b <= 1; b++){
			if(A[b] < A[b+1]){
				c = A[b];
				A[b] = A[b+1];
				A[b+1] = c;
			}
		}
		a++;
	}
		
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", A[2], A[1], A[0], B[0], B[1], B[2]);
return(0);
}