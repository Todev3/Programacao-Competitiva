#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, N, R;
	scanf("%d", &N);
	for(i=2; i <= N; i+=2){
		R = pow(i,2);
		printf("%d^2 = %d\n", i, R);
	}

return(0);
}