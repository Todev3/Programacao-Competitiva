#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, X, R=0, R1;
	for(i=1; i <= 100; i++){
		scanf("%d", &X);
		if(X > R){ R = X; R1 = i;}
	}
	printf("%d\n%d\n", R, R1);
return(0);
}