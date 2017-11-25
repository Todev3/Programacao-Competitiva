#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Par[5], Imp[5], P=0, I=0, C, Val, Axu;
	
	for(C=0; C < 15; C++){
	
		scanf("%d", &Val);
		
		if(Val % 2 == 0){
			Par[P] = Val;
			P++;
		}
		else{
			Imp[I] = Val;
			I++;
		}
	
		if(P == 5){
			for(Axu=0; Axu < P; Axu++)
				printf("par[%d] = %d\n", Axu, Par[Axu]);
			P = 0;
		}
			
		if(I == 5){
			for(Axu=0; Axu < I; Axu++)
				printf("impar[%d] = %d\n", Axu, Imp[Axu]);
			I = 0;
		}
		
		if(C == 14){
			for(Axu=0; Axu < I; Axu++)
				printf("impar[%d] = %d\n", Axu, Imp[Axu]);
				
			for(Axu=0; Axu < P; Axu++)
				printf("par[%d] = %d\n", Axu, Par[Axu]);
		
		}		
		
	}
	
	return 0;
}