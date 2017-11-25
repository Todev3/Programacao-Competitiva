#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 100100

int main(){
	long long int Vez, Cont, Nums, C, M[Max], P[Max], Lo, Hue, Poke;
	
	scanf("%lld", &Vez);
	
	for(Cont = 0; Cont < Vez; Cont++){

	
		for(C=0; C < Max; C++)
			P[C] = -1;
		

		scanf("%lld", &Nums);
		for(C=0; C < Nums; C++){
			scanf("%lld", &M[C]);
		}
		
		Hue = 0;
		
		for(C=0; C < Nums; C++){
			for(Poke=0; Poke < Hue && M[C] != P[Poke]; Poke++);
			if(Poke == Hue){
				P[Hue] = M[C];
				Hue++;
			}
		}
		
				
		printf("%lld\n", Hue);
		
	}
	
	return 0;
}