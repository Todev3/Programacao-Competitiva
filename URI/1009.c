#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
	char Nome[50];
	double S, V, C;
	scanf("%s %lf %lf", Nome, &S, &V);
	C = S + (V * 0.15);
	printf("TOTAL = R$ %.2lf\n", C);
return(0);
}