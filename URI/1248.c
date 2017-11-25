#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Arru(char * A){
	int Cont=0;
	
	while(A[Cont] != '\r' && A[Cont] != '\n' && A[Cont] != '\0')
		Cont++;
	
	A[Cont] = '\0';
}

void Limpa(){
	while(getchar() != '\n');
}

int main(void){
	char Comp[28], Ini[40], Ent[40];
	int Cont, Vezes, C, c;
	
	scanf("%d", &Vezes);
	
	Limpa();
	
	for(Cont = 0; Cont < Vezes; Cont++){
		
		for(C=0; C < 28; C++)
			Comp[C] = 0;
		
		fgets(Ini, 40, stdin);
		
		Arru(Ini);
		
		c = 0;
		
		while(Ini[c] != '\0'){
				Comp[Ini[c] - 'A']++;
				c++;
		}
		
		for(C = 0; C < 2; C++){
			
			fgets(Ent, 40, stdin);
			
			Arru(Ent);
			
			c=0;
			
			while(Ent[c] != '\0'){
				Comp[Ent[c] - 'A']--;
				c++;
			}
			
		}
		
		C = c = 0;
		
		while(c  < 26){
			if(Comp[c] < 0){
				printf("CHEATER\n");
				C = -1;
				break;
			}
			else if(Comp[c] > 0){
				Ini[C] = 'A' + c;
				C++;
			}
			
			c++;
			
		}
		
		Ini[C] = '\0';
		
		if(C != -1)
			printf("%s\n", Ini);
		
	}


	return 0;
}