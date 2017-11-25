#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float A, B;
	scanf("%f %f", &A, &B);
	A = (A * 3.5 + B * 7.5) / 11;
	printf("MEDIA = %.5f\n", A);
return(0);
}