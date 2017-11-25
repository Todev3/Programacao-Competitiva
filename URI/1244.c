#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char Stri[51][60], Axu[50];
	int Cont, Vezes, C, Lin, Ba;
	
	scanf("%d", &Vezes);
	
	for(C=0; C < Vezes; C++){
		Cont = 0;
		do{		
			scanf("%s", Stri[Cont]);
			Cont++;
		}while( getchar() != '\n');
		
		Ba = Cont - 1;
		
		while(Ba != 0){
			for(Lin = 0; Lin < Ba; Lin++){
				
				if( strlen( Stri[Lin] ) < strlen( Stri[Lin+1] ) ){
					strcpy( Axu, Stri[Lin]);
					strcpy( Stri[Lin], Stri[Lin+1] );
					strcpy(Stri[Lin+1], Axu);
				}
			}
			
			Ba--;
		
		}
		
		for(Ba = 0; Ba < Cont; Ba++){
			if(Ba != 0)
				printf(" ");
			
			printf("%s", Stri[Ba]);
		}
		
		printf("\n");
		
	}
	
	return 0;
}