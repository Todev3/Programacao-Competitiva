#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	double Tab[12][12], Soma=0;
	int Col, Lin, T=0, R=11, Div=0;
	char Conta;
	
	scanf("%c", &Conta);
	for(Lin=0; Lin <= 11; Lin++){
		for(Col=0; Col<=11; Col++){
			scanf("%lf", &Tab[Lin][Col]);
		}
	}
	
	
	for(Lin=0; Lin <= 4; Lin++){
		T++;
		R--;
		for(Col = T; Col <= R; Col++){
			Soma += Tab[Lin][Col];
			Div++;
		}
	}
	
	
	if(Conta == 'S')
		printf("%.1lf\n", Soma);
	else
		printf("%.1lf\n", Soma/Div);
return(0);
}