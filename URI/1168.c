#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char Led[10000];
	int Vezes, Cont, i=0;
	long long int Soma=0;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf(" %s", Led);
		
		while(Led[i] != '\0'){
			
			if(Led[i] - '0' == 0)
				Soma += 6;
			else if(Led[i] - '0' == 1)
				Soma += 2;
			else if(Led[i] - '0' == 2)
				Soma += 5;
			else if(Led[i] - '0' == 3)
				Soma += 5;
			else if(Led[i] - '0' == 4)
				Soma += 4;
			else if(Led[i] - '0' == 5)
				Soma += 5;
			else if(Led[i] - '0' == 6)
				Soma += 6;
			else if(Led[i] - '0' == 7)
				Soma += 3;
			else if(Led[i] - '0' == 8)
				Soma += 7;
			else
				Soma += 6;
			i++;
		}
		
		printf("%d leds\n", Soma);
		Soma = 0;
		i = 0;
	
	}
	
	return 0;
}