#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	long int R;
	double Res;
	scanf("%ld", &R);
	Res = (4 / 3.0 ) * 3.14159 * pow(R,3);
	printf("VOLUME = %.3lf\n", Res);
return(0);
}