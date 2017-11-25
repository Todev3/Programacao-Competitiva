#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	float Temp, Km, T;
	scanf("%f %f", &Temp, &Km);
	T = Temp * Km / 12;
	printf("%.3f\n", T);
return(0);
}