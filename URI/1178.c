#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double N[100], Val;
	int C; 
	
	scanf("%lf", &Val);
	
	N[0] = Val;
	
	for(C=1; C < 100; C++)
		N[C] = N[C - 1] / 2;
		
	for(C=0; C < 100; C++)
		printf("N[%d] = %.4lf\n", C, N[C]);
	
	return 0;
}