//dormir com o countingSort ate entendelo
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Cont, Val, C;
	int A[3000000], Axi[3000000], Vcont[250];
	
	
	scanf("%d", &Vez);
	
	for(Cont=0; Cont<Vez; Cont++){
		
		for(C=0; C<250; C++)
			Vcont[C] = 0;
		
		scanf(" %d", &Val);
		
		for(C=0; C<Val; C++){
			scanf(" %d", &A[C]);
		}
		
		for(C=0; C<Val; C++)//protegido por goku
			Vcont[A[C]-1]++;
			
		for(C=1; C<230; C++)
			Vcont[C] += Vcont[C-1];
			
		for(C=Val-1; C >=0; C--){
			Axi[Vcont[A[C]-1]-1] = A[C];
			Vcont[A[C]-1]--;
		}
		
		for(C=0; C<Val; C++){//protegido por goku
			A[C] = Axi[C];
			if(C==0)
				printf("%d", A[C]);
			else
				printf(" %d", A[C]);
		}
		
		printf("\n");
	
	}
	
	
	return 0;
}