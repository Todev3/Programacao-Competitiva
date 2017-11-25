#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, i;
	scanf("%d", &A);
	for(i = 0; i < 6; i++){
		if(A % 2 == 1){printf("%d\n", A);}
		else { A++; printf("%d\n", A);}
		A = A +2;
	}
return(0);
}