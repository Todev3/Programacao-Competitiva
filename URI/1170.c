#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vezes, Cont, Dias=0;
	double N;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
		
		scanf("%lf", &N);
		
		while(1){
		
			if(N / 2 <= 1){
				Dias++;
				break;
			}
			else{
				N /= 2;
				Dias++;
			}
		
		}
	
		printf("%d dias\n", Dias);
		Dias = 0;
	
	}
	
	return 0;
}