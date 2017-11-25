#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Cont=0;
	char T[55];
	
	while(fgets(T, 55, stdin) != NULL){
	
		while(T[Cont] != '\r' && T[Cont] != '\n' && T[Cont] != '\0'){
		
			if( T[Cont] >= 'a' && T[Cont] <= 'z'){
			
				if(T[Cont]+13 > 'z')//caso numero de maior que a letra 'z', tira 26 para retorna para o começo do alfabeto
					T[Cont] += 13 - 26;
				else
					T[Cont] += 13;
			
			}
			if( T[Cont] >= 'A' && T[Cont] <= 'Z'){
			
				if(T[Cont]+13 > 'Z')//caso numero de maior que a letra 'z', tira 26 para retorna para o começo do alfabeto
						T[Cont] += 13 - 26;
					else
						T[Cont] += 13;
				
			}
			
			Cont++;
		
		}
		
		T[Cont] = '\0';
		
		printf("%s\n", T);
	
		Cont = 0;
	
	}
	
	return 0;
}