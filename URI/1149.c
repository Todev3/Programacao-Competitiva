#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, N, C, i;
	scanf("%d %d", &A, &N);
	while(N <= 0){scanf("%d", &N);}
	C = A;
	for(i = 1; i < N; i++){
		C++;
		A = A + C;
	}
	printf("%d\n", A);
return(0);
}