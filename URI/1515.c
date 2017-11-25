#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int Cont, Vezes, Ano, Temp, Tot;
	char Nome[60], A[60];
	
	while(1){
		
		scanf("%d", &Vezes);
		
		if(Vezes == 0)
			break;
		
		for(Cont=0; Cont < Vezes; Cont++){
			scanf("%s %d %d", Nome, &Ano, &Temp);
			
			if(Cont == 0){
				strcpy(A, Nome);
				Tot = Ano - Temp;
			}
			else if(Tot > Ano - Temp){
				strcpy(A, Nome);
				Tot = Ano - Temp;
			}
		}
		
		printf("%s\n", A);
	};

	return 0;
}