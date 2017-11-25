#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long long int Fat=1;
	int Cont, X;
	scanf("%d", &X);
	if(X == 0)
		printf("1\n");
	else{
		for(Cont = 1; Cont <= X; Cont++)
			Fat = Fat * Cont;
			printf("%lld\n", Fat);
	}
return(0);
}