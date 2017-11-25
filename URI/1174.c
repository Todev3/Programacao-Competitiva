#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Cont;
	float Matriz[100];
	
	for(Cont=0; Cont < 100; Cont++)
		scanf("%f", &Matriz[Cont]);
		
	for(Cont=0; Cont < 100; Cont++)
		if(Matriz[Cont] <= 10)
			printf("A[%d] = %g\n", Cont, Matriz[Cont]);
	
	return(0);
}