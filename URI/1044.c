#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, B, R;
	scanf("%d %d", &A, &B);
	if (A > B){
		R = A % B;
	}
	else {
		R = B % A;
	}
	if(R == 0){printf("Sao Multiplos\n");}
	else {printf("Nao sao Multiplos\n");}
return(0);
}