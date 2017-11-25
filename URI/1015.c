#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
	int x1, x2, y1, y2; 
	float R;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	R = sqrt( (pow(x2,2) - (2 * x2 * x1) + pow(x1,2)) + (pow(y2,2) - (2 * y2 * y1) + pow(y1,2)) );
	printf("%.4f\n", R);
return(0);
}