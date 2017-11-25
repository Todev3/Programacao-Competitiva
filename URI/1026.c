#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long long int A, B, Posi=0, Result=0;
	
	while(scanf("%lld %lld", &A, &B) != EOF){
	
		if(A < B){
			Posi = A;
			A = B;
			B = Posi;
		}
		
		for(Posi=0; Posi <= 32; Posi++){
		
			if(A % 2 == B % 2)
				Result += 0;
			else
				Result += pow(2,Posi);
				
			if(A / 2 == 0 && B / 2 == 0)
				break;
			
			A /= 2;
			B /= 2;

		}
		
		printf("%lld\n", Result);
		Result = 0;
		
	}
	
}