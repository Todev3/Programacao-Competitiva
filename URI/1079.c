#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, i;
	float A, B, C;
	scanf("%d", &N);
	for(i=0; i < N; i++){
		scanf("%f %f %f", &A, &B, &C);
		A = ((A * 2) + (B * 3) + (C * 5)) / 10;
		printf("%.1f\n", A);
	}
return(0);
}