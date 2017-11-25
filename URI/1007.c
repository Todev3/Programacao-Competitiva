#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	A = (A * B - C * D);
	printf("DIFERENCA = %d\n", A);
return(0);
}