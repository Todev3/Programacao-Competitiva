#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 110
#define MAX_ARESTAS 
#define INFINITO

#define TRUE 1
#define FALSE 0

int main(void){
	char Mat[MAX_VERTICES][MAX_VERTICES], Lin, Col, Tam, Aux, Axu;
	
	while( scanf("%d", &Tam) != EOF){
		
		for(Lin = 0; Lin < Tam; Lin++)
			for(Col = 0; Col < Tam; Col++)
				Mat[Lin][Col] = 0;
			
		for(Lin = 0; Lin < Tam; Lin++)
			Mat[Lin][Lin] = 2;
		
		for(Lin = 0; Lin < Tam; Lin++)
			Mat[Lin][ (Tam - (Lin+1) )] = 3;
		
		Axu = Tam / 3;
		Aux = (Tam - Axu);
		
		for(Lin = Axu; Lin < Aux; Lin++)
			for(Col = Axu ; Col < Aux ; Col++)
				Mat[Lin][Col] = 1;
		
		Mat[Tam / 2][Tam / 2] = 4;
		
		for(Lin = 0; Lin < Tam; Lin++){
			for(Col = 0; Col < Tam; Col++)
				printf("%d", Mat[Lin][Col]);
			printf("\n");
		}
		
		printf("\n");
		
	}
	
	return 0;
}