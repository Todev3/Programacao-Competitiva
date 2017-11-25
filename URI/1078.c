#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, R, i;
	scanf("%d", &A);
	for(i = 1; i <=10; i++){
	R = i * A;
	printf("%d x %d = %d\n", i, A, R);
	}
return(0);
}