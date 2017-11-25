#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int M, F;
	
	scanf("%d %d", &M, &F);
	while(M != 0 || F != 0){
		printf("%d\n", F+M);
		scanf("%d %d", &M, &F);
	}
	
	return(0);
}