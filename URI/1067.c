#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, R=1, i;
	scanf("%d", &A);
	for(i = 1; i <= A; i++){
		if(i % 2 == 1 ){
		printf("%d\n", R);
		R = R + 2;}
	}
return(0);
}