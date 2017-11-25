#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int A, B, C;
	
	while(scanf("%d %d %d", &A, &B, &C) != EOF){
		if(A == B && B == C)
			printf("*\n");
		else if(A != B && A != C)
			printf("A\n");
		else if(B != A && B != C)
			printf("B\n");
		else
			printf("C\n");
	
	}
	
	return(0);
}