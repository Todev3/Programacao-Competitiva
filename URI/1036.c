#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
	double A, B, C, R1, R2;
	scanf("%lf %lf %lf", &A, &B, &C);
	if(A != 0){
		C = pow(B,2) + (- 4 * A * C);
		if(C < 0){printf("Impossivel calcular\n"); }
		else{
			C = sqrt(C);
			R1 = (-B + C) / (2 * A);
			R2 = (-B - C) / (2 * A);
			printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
		}
	}
	else 
		printf("Impossivel calcular\n");
return(0);
}