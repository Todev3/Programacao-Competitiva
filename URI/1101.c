#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int P, M, N, R=0;
	scanf("%d %d", &P, &N);
	while(P > 0 && N > 0){
		M = (P + N + abs(P - N)) / 2;
		N = (P + N - abs(P - N)) / 2;
		for(N = N; N <= M; N++){
			printf("%d ", N);
			R = R + N;
		}
		printf("Sum=%d\n", R);
		R = 0;
		scanf("%d %d", &P, &N);
	}
return(0);
}