#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int A=0, G=0, D=0, Para=0;
	
	while(Para != 4){
	
		scanf("%d", &Para);
		
		if(Para == 1)
			A++;
		else if(Para == 2)
			G++;
		else if(Para == 3)
			D++;	
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", A, G, D);
	
	return 0;
}