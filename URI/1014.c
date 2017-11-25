#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	float X, Y, F;
	scanf("%f %f", &X, &Y);
	F = X / Y;
	printf("%.3f km/l\n", F);
return(0);
}