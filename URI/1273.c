#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char A[52][53];
	int Cont, Vezes, Tamanho=0, i, Ta, Ax=0;
	
	while(1){
		
		scanf("%d", &Vezes);
		
		if(Vezes == 0)
			break;
		
		Ax++;
		
		if(Ax > 1)
			printf("\n");
			
		for(Cont=0; Cont < Vezes; Cont++){
			scanf("%s", A[Cont]);
			if( strlen(A[Cont]) > Tamanho )
				Tamanho = strlen(A[Cont]);
		}
	
		for(Cont=0; Cont < Vezes; Cont++){
			
			Ta = Tamanho - strlen(A[Cont]);
			
			for(i=0; i < Ta; i++){
				printf(" ");
			}
		
			printf("%s\n", A[Cont]);
			
		}
		
		Tamanho = 0;
	
	}
	return 0;
}