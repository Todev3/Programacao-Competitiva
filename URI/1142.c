#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int Cont, A=1, B=2, C=3, N;
	scanf("%d", &N);
	for(Cont=0; Cont < N; Cont++){
		
		printf("%d %d %d PUM\n", A, B, C);
		A += 4;
		B += 4;
		C += 4;
	}
return(0);
}