#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	double S=0, Num1=1, Num2=1, R=0;
	do{
		Num1 += 2;
		Num2 *= 2;
		R = Num1 / Num2;
		S += R;
	}while(Num1 != 39);
	S++;
	printf("%.2lf\n", S);
return(0);
}