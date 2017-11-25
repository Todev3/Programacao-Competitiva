#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int N, Vez, Cont;
	
	scanf("%d", &Vez);

	for(Cont=0; Cont < Vez; Cont++){
		
		scanf("%d", &N);
		
		N++;
		
		N = N / 2;
		
		printf("%d\n", N);
			
	}
	
	return 0;
}