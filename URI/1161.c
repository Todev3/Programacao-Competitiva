#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	long long int Soma, A=0, B=0;
	int Cont, N1, N2;
	
	while(scanf("%d %d", &N1, &N2) != EOF){
		
		for(Cont=0; Cont <= N1; Cont++){
			if(Cont == 0)
				A++;
			else
				A *= Cont;
		}
	
		for(Cont=0; Cont <= N2; Cont++){
			if(Cont == 0)
				B++;
			else
				B *= Cont;
		}
	
		printf("%lld\n", A+B);
		
		B=0;
		A=0;
		
	}
	
	return 0;
}