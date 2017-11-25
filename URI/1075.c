#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, i, R;
	scanf("%d", &N);
	for(i=1; i <= 10000; i++){
		R = i % N;
		if(R == 2){ printf("%d\n", i); }
	}	
return(0);
}