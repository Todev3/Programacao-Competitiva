#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int Arru(char * A){
	int Cont=0;
	
	while(A[Cont] != '\n' && A[Cont] != 'r' && A[Cont] != '\0'){
		Cont++;
	}
	
	A[Cont] = '\0';
	
	return Cont;
}

int main(void){
	char Nome[60];
	int Fim, Cont;
	unsigned long long int Soma, Mult;
	
	while( fgets(Nome, 58, stdin) != NULL ){
		Soma = 0;
		Mult = 1;

		Fim = Arru(Nome);	
		
		for(Cont = Fim - 1; Cont >= 0; Cont--){
			
			if(Nome[Cont] >= '0' && Nome[Cont] <= '9'){
				Soma += (Nome[Cont] - '0') * Mult;
				Mult *= 10;
			}
			else if(Nome[Cont] == 'O' || Nome[Cont] == 'o'){
				Soma += 0 * Mult;
				Mult *= 10;
			}
			else if(Nome[Cont] == 'l'){
				Soma += 1 * Mult;
				Mult *= 10;
			
			}
			else if((Nome[Cont] >= 'A' && Nome[Cont] <= 'Z') || (Nome[Cont] >= 'a' && Nome[Cont] <= 'z')){
				Mult = 2;
				break;
			}
			
			if(Soma > 2147483647){
				Mult = 2;
				break;
			}
			
		}
		
		if( Mult != 1 && Mult != 2 )
			printf("%llu\n", Soma);
		else
			printf("error\n");
		
	}

	return 0;
}