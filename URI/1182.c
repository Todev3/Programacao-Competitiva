#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	double Tab[13][13], Soma=0;
	int Col, Lin, Local;
	char Conta;
	
	scanf("%d %c", &Local, &Conta);
	for(Lin=0; Lin <= 11; Lin++){
		for(Col=0; Col<=11; Col++){
			scanf("%lf", &Tab[Lin][Col]);
		}
	}
	
	for(Lin=0; Lin<=11; Lin++){
		Soma += Tab[Lin][Local];
	}
	
	if(Conta == 'S')
		printf("%.1lf\n", Soma);
	else
		printf("%.1lf\n", Soma/12);
return(0);
}