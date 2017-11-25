#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 55

#define TRUE 1
#define FALSE 0

void Arru(char * A){
	while(*A != '\n' && *A != '\r' && *A != '\0')
		A++;
	*A = '\0';
}

int main(void){
	char Entrada[MAX_TAM], Usadas[28], Flag, A, B, Format;
	int Cont;
	
	while( fgets(Entrada, MAX_TAM, stdin) != NULL ){
		
		Arru(Entrada);
		
		for(Cont=0; Cont < 27; Cont++)
			Usadas[Cont] = FALSE;
		
		Cont = 0;
		while(Entrada[Cont] != '\0'){
			if( Entrada[Cont] >= 'a' && Entrada[Cont] <= 'z')
				Usadas[ Entrada[Cont] - 'a' ] = TRUE;
			Cont++;
		}
		
		Format = Flag = 0;
		for(Cont=0; Cont < 27; Cont++){
			if(Usadas[Cont] == TRUE && Flag == FALSE){
				B = A = Cont + 'a';
				Flag = TRUE;
			}
			else if(Usadas[Cont] == TRUE && Flag != FALSE)
				B = Cont + 'a';
			else if(Flag != FALSE){
				if( Format == TRUE)
					printf(", ");
				
				printf("%c:%c", A, B);
				Flag = FALSE;
				Format = TRUE;
			}
		
		}
		
		printf("\n");
		
	}
	
	return 0;
}