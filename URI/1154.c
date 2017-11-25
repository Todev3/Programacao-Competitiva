#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int I, R=0;
	double C=0;
	scanf("%d", &I);
	while(I >= 0){
		R += I;
		C++;
		scanf("%d", &I);
	}
	C = R / C;
	printf("%.2lf\n", C);
return(0);
}