#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Cont, N;
	long long int A, B, C;
	scanf("%d", &N);
	
	for(Cont=0; Cont < N; Cont++){
		A = pow(Cont+1, 1);
		B = pow(Cont+1, 2);
		C = pow(Cont+1, 3);
		printf("%lld %lld %lld\n", A, B, C);
	
	}
	
	return 0;
}