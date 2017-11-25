#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	float A, B, C;
	scanf("%f %f %f", &A, &B, &C);
	A = ( (A * 2) + (B * 3) + (C * 5) ) / 10;
	printf("MEDIA = %.1f\n", A);
return(0);
}