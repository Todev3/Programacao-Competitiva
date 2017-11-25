#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float M1=0, M2=0;
	do{
		if(M1 != 0){printf("nota invalida\n");}
		scanf("%f", &M1);
	}while(M1 > 10 || M1 < 0);
	do{
		if(M2 != 0){printf("nota invalida\n");}
		scanf("%f", &M2);
	}while(M2 > 10 || M2 < 0);
	M1 = (M1 + M2) / 2;
	printf("media = %.2f\n", M1);
return(0);
}