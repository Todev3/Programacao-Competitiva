#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int N1[20], N2[20], Cont;
	
	for(Cont=0; Cont < 20; Cont++)
		scanf("%d", &N1[Cont]);
		
	for(Cont=0; Cont < 10; Cont++){
		N2[19 - Cont] = N1[Cont];
		N2[Cont] = N1[19 - Cont];
	}
	
	for(Cont=0; Cont < 20; Cont++)
		printf("N[%d] = %d\n", Cont,N2[Cont]);
		
		
	return 0;
}