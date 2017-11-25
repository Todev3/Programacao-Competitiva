#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void Limpar(){ //Limpa o buffer	
	while( getchar() != '\n');
	return;
}

int main(){
	char Frase[250], TabCont[40], A;
	int Casos, ContCasos, i, Pos=0, Maior=0, T;
	
	scanf("%d", &Casos);
	Limpar();
	
	for(ContCasos=1; ContCasos <= Casos; ContCasos++){
		
		for(i=0; i <= 26; i++)
			TabCont[i] = 0;
		
		fgets(Frase, 210, stdin);
		
		for(i=0; i <= 210; i++){
			
			if( tolower(Frase[i]) >= 97 && tolower(Frase[i]) <= 122){
				
				A = tolower(Frase[i]);
				
				TabCont[A-97]++;
				
				
				if (Maior < TabCont[A-97] )
					Maior = TabCont[A-97];
				}
			
			if(Frase[i+1] == '\n' || Frase[i+1] == '\0')
				break;
		}
		
		for(i=0; i <= 26; i++){
			if(Maior == TabCont[i])
				printf("%c", i+97);
				
		}
		Maior = 0;
		printf("\n");
	}
	
	return(0);
}