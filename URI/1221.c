#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vezes, Cont, Axu=0, Coisa;
	long long int N, Test;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf("%lld", &N);
		
		Coisa = (int)sqrt(N);
		
		for(Test=2; Test <= Coisa; Test++){
		
			if(N%Test == 0 && N != Test){
				Axu++;
				break;
			}
		}
		
		if(Axu == 0)
			printf("Prime\n");
		else
			printf("Not Prime\n");
			
		Axu = 0;
	}
	
	return 0;
}