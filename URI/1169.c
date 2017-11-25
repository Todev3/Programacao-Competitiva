#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	
	int NumCasos, Cont, Casas, R;
	unsigned long long int Soma=1;
	
	scanf("%d", &NumCasos);
	for(Cont=0; Cont < NumCasos; Cont++){
		
		scanf("%d", &Casas);
		
		if(Casas == 64){
			Casas = 63;
			R = 1;
		}
		
		while(Casas != 0){
			Soma *= 2;	
		Casas--;
		}
		
		Soma = (Soma / 12000);
		
		if(R == 1)
			Soma = (2 * Soma) + 1;
			
		printf("%llu kg\n", Soma);
		Soma = 1;
		R = 0;
	}
	
	return(0);
}