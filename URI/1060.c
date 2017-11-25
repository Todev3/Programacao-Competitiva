#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float A, i, R=0;
	for(i = 0; i < 6; i++){
		scanf("%f", &A);
		if(A > 0){ R++;}
	}
	printf("%.0f valores positivos\n", R);
return(0);
}