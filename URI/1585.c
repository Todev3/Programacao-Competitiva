#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int Cont, Ent, A, B;

	scanf("%d", &Ent);
	
	for(Cont=0; Cont < Ent; Cont++){
		
		scanf("%d %d", &A, &B);
		
		printf("%d cm2\n", ((A*B)/2));
		
	}

	return 0;
}