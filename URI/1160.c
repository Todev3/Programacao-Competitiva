#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Cont, Anos=0;
	long long int A, B;
	double Ca, Cb;
	
	scanf("%d", &Vez);
	
	for(Cont=0; Cont < Vez; Cont++){
		
		scanf("%lld %lld %lf %lf", &A, &B, &Ca, &Cb);
		
		while(1){
			if(Ca != 0)
				A += (A * (Ca / 100) );
			if(Cb != 0)
				B += (B * (Cb / 100) );
			
			Anos++;
			
			if(A > B)
				break;
			if(Anos > 100)
				break;
		}
		
		if(Anos > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n", Anos);
		
		Anos = 0;
		
	}
	
	return(0);
}