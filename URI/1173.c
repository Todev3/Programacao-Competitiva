#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long long int X[11];
	int	Cont=0;
	scanf("%lld", &X[0]);
	do{
		printf("N[%d] = %lld\n", Cont, X[Cont]);
		X[Cont + 1] = X[Cont] * 2;
		Cont++;
	}while(Cont != 10 );
	
return(0);
}