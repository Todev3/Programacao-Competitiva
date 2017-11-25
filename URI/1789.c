#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 55

#define TRUE 1
#define FALSE 0

int main(void){
	int Numeros, Cont, Aux, Maior;
	
	while( scanf("%d", &Numeros) != EOF){
		
		Maior = 0;
		
		for(Cont=0; Cont < Numeros; Cont++){
			scanf("%d", &Aux);
			if(Aux > Maior)
				Maior = Aux;
		}
		
		if(Maior < 10)
			printf("1\n");
		else if(Maior < 20)
			printf("2\n");
		else
			printf("3\n");
		
	}

	return 0;
}