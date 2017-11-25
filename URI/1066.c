#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, P=0, I=0, Po=0, N=0, i;
	for(i = 0; i <  5; i++){
		scanf("%d", &A);
		if( A > 0 && A != 0){ Po++; }
		if( A <0 ) { N++; }
		
		if(A < 0){A = A * (-1);}
		
		if(A % 2 == 0){ P++; }
		else{ I++; }
	}
	printf("%d valor(es) par(es)\n", P);
	printf("%d valor(es) impar(es)\n", I);
	printf("%d valor(es) positivo(s)\n", Po);
	printf("%d valor(es) negativo(s)\n", N);
return(0);
}