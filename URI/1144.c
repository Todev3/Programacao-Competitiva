#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long int A, B, C, i;
	scanf("%d", &A);
	for(i = 1; i <= A; i++){
		B = pow(i,2);
		C = pow(i,3);
		printf("%d %d %d\n", i, B, C);
		B++;
		C++;
		printf("%d %d %d\n", i, B, C);
	}
return(0);
}