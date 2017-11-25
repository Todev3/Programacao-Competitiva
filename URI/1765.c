#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Qtd, Vez, Cont;
	double A, B;

	
	while(1){
	
		scanf("%d", &Vez);
		if(Vez == 0)
			break;
		for(Cont = 0; Cont < Vez; Cont++){
			scanf("%d %lf %lf", &Qtd, &A, &B);
			A = Qtd * (((A+B)*5)/2);
		
			printf("Size #%d:\nIce Cream Used: %.2lf cm2\n", Cont+1, A);
		
		}
		
		printf("\n");
		
	}
	
	return 0;
}