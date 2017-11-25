#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if( A <(B + C) && B < (A + B) && C < (A + B) ){
		A = A + B + C;
		printf("Perimetro = %03.1lf\n", A);
	}
	else{
		A = (C * (A + B)) / 2;
		printf("Area = %03.1lf\n", A);
	}
	
	
	return 0;
}