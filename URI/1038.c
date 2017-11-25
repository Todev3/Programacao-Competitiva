#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, B;
	float T;
	scanf("%d %d", &A, &B);
	if(A == 1){ T = B * 4.0;}
	if(A == 2){ T = B * 4.5;}
	if(A == 3){ T = B * 5.0;}
	if(A == 4){ T = B * 2.0;}
	if(A == 5){ T = B * 1.5;}
	printf("Total: R$ %.2f\n", T);
return(0);
}