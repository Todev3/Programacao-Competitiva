#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int A, B, C, M;
	scanf("%d %d %d", &A, &B, &C);
	M = (A + B + abs(A - B )) / 2;
	C = (B + C + abs(B - C )) / 2;
	M = (M + C + abs(M - C )) / 2;
	printf("%d eh o maior\n", M);
return(0);
}