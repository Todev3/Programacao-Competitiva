#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 101

#define TRUE 1
#define FALSE 0

int main(void){
	int Sorte, Numeros, Valor, Escolhidos[MAX_TAM], Num, Menor;
	int ContSorte, ContNumeros;
	
	while( scanf("%d %d %d", &Sorte, &Numeros, &Valor) && (Sorte+Numeros+Valor) != 0 ){
		
		for(ContSorte=0; ContSorte < MAX_TAM; ContSorte++)
			Escolhidos[ContSorte] = 0;
		
		for(ContSorte=0; ContSorte < Sorte; ContSorte++)
			for(ContNumeros=0; ContNumeros < Numeros; ContNumeros++){
				scanf(" %d", &Num);
				Escolhidos[Num - 1]++;
			}
			
		Menor = Escolhidos[0];
		
		for(ContSorte=0; ContSorte < Valor; ContSorte++){
			if( Menor > Escolhidos[ContSorte] )
				Menor = Escolhidos[ContSorte];
		}
		Num = 0;
		for(ContSorte=0; ContSorte < Valor; ContSorte++){
			if( Menor == Escolhidos[ContSorte] ){
				if(Num != 0)
					printf(" ");
				printf("%d", ContSorte+1);
				Num++;
			}
		}
		
		printf("\n");
		
	}
	
	return 0;
}