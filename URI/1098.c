#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int C;
	double I=0, J=0;
	
	while(1){
	
		for(C=1; C <= 3; C++)
			printf("I=%g J=%g\n", I, J+C);
		
		I += 0.2;
		J = I;
		
		if(I >= 2)
			break;

	}

	return 0;
}