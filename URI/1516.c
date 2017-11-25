#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 55

#define TRUE 1
#define FALSE 0

int main(void){
	char Desenho[MAX_TAM][MAX_TAM];
	int NAlt, MLar, AAlt, BLar, Lin, Col, L, C;

	while(scanf("%d %d", &NAlt, &MLar) && NAlt+MLar != 0){
		
		for(Lin = 0; Lin < NAlt; Lin++)
			scanf("%s", Desenho[Lin]);
		
		scanf("%d %d", &AAlt, &BLar);
		
		AAlt = AAlt / NAlt ;
		BLar = BLar / MLar;
		
		for(Lin=0; Lin < NAlt; Lin++){
			for(L=0; L < AAlt; L++){
				for(Col=0; Col < MLar; Col++){
					for(C=0; C < BLar; C++)
						printf("%c", Desenho[Lin][Col]);
				}
			printf("\n");
			}
		}
		printf("\n");
	}
	
	return 0;
}