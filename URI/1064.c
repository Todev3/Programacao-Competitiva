#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float A, M=0, Q=0; 
	int i;
	for(i= 0; i < 6; i++){
		scanf("%f", &A);
		if(A > 0){
			M = M + A;
			Q++;
		}
	}
	if(Q == 0){Q++;
	M = M / Q; Q--;}
	else {M = M / Q;}
	printf("%.0f valores positivos\n%.1f\n", Q, M);
return(0);
}