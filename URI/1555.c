#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vezes, Cont;
	double X, Y, Br, Cr, Rr;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf("%lf %lf", &X, &Y);
		
		Rr = pow((3*X),2) + pow(Y,2);
		Br = 2*(pow(X, 2)) + pow((5*Y), 2);
		Cr = (-100*X)+ pow(Y, 3);
	
		if(Rr > Br && Rr > Cr)
			printf("Rafael ganhou\n");
		else if(Br > Rr && Br > Cr)
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");
		
	}
	
	return 0;
}