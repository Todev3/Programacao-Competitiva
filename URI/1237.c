#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 55

#define TRUE 1
#define FALSE 0

void Arru(char * A){
	while(*A != '\n' && *A != '\r' && *A != '\0' )
		A++;
	*A = '\0';
}

int main(void){
	char Entrada[MAX_TAM], String[MAX_TAM], Sub[MAX_TAM];
	int ContString, ContSub, Maior, Axu, Cont, Aju, Max;
	
	while(fgets(Entrada, MAX_TAM, stdin) != NULL){
		
		fgets(String, MAX_TAM, stdin);
		
		Arru(Entrada);
		Arru(String);
		
		ContString = ContSub = 0;
		Maior = Aju = 0;
		while(String[ContString] != '\0'){
		
			Axu = ContString;
			
			while(String[Axu] != '\0'){
				ContSub = 0;
				for(Cont = ContString; Cont <= Axu; Cont++){
					Sub[ContSub++] = String[Cont];
				}
				
				Sub[ContSub] = '\0';
				
				if( strstr(Entrada, Sub) != NULL){
					Aju = strlen(Sub);
				}
				else
					break;
				
				Axu++;
			
			}
			
			if(Aju > Maior)
				Maior = Aju;
			
			ContString++;
		}
		
		printf("%d\n", Maior);
		
	}
	
	
	return 0;
}