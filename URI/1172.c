#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int X[10], i;
	for(i = 0; i < 10; i++){
		scanf("%d", &X[i]);
		if(X[i] == 0 || X[i] < 0){
			X[i] = 1;
		}
		printf("X[%d] = %d\n", i, X[i]);
	}
return(0);
}