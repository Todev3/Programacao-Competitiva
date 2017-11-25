#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int D, A, M, Df;
	scanf("%d", &D);
	A = D / 365;
	M = (D - (A * 365)) / 30;
	Df = (D - (A * 365)) % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, Df);
return(0);
}