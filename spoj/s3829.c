#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double S;
	
	scanf("%lf", &S);

	S = pow(S,2);
	
	printf("%.0lf\n", S);
	
	return 0;
}