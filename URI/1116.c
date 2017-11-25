#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, i;
	float X, Y;
	scanf("%d", &N);
	for(i=0;i < N; i++){
		scanf("%f %f", &X, &Y);
		if(Y == 0){printf("divisao impossivel\n");}
		else { 
			X = X / Y;
			printf("%.1f\n", X);
		}
	}
return(0);
}