#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int D=1;
	double S=0;
	do{
		D++;
		S += 1.0 / D;
	}while(D != 100);
	S += 1;
	printf("%.2lf\n", S);
return(0);
}