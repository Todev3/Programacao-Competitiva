#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	long long int Vezes, R1, R2, Cont;
	
	scanf("%lld", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
		
		scanf("%lld %lld", &R1, &R2);
		printf("%lld\n", R1 + R2);
	
	}
	
	return 0;
}