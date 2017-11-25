#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double A, B, C;
	int R;
	
	while(1){
	
		scanf("%lf", &A);
		
		if(A == 0)
			break;
		
		scanf("%lf %lf", &B, &C);
		
		R = (int)sqrt(A * B / (C / 100));
		
		printf("%d\n", R);
	
	}
	
	return 0;
}