#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void limpar(){
	 while(getchar()!='\n');
}

int main(){
	char Pa[1010], Aux[1010];
	int Vezes, Cont, i=0, B=0;
	
	scanf("%d", &Vezes);
	limpar();
	for(Cont=0; Cont < Vezes; Cont++){
	
		fgets(Pa, 1010, stdin);

		while(Pa[i] != '\n' && Pa[i] != '\0'){//soma 3 a cada letra
			if(Pa[i] >= 'a' && Pa[i] <= 'z' || Pa[i] >= 'A' && Pa[i] <= 'Z'){
				Pa[i] = Pa[i] + 3;
			}
			i++;
		}
		Pa[i] = '\0';
		
		strcpy(Aux, Pa);
		B = strlen(Pa) - 1;
		i = 0;
		
		while(Pa[i] != '\n' && Pa[i] != '\0'){//inverte a string
			Pa[i] = Aux[B - i];
			i++;
		}
				
		i = strlen(Pa) / 2;
		
		while(Pa[i] != '\n' && Pa[i] != '\0'){//subtrai 1 de cada caracter
			Pa[i] = Pa[i] - 1;
			i++;
		}
		
		printf("%s\n", Pa);
		i = 0;
		
	}
	
	return 0;
}