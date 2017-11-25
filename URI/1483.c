#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(void){
	double Valor;
	long long int Apost, Result, Ta, Fo;
	
	scanf("%lf %lld %lld", &Valor, &Apost, &Result);

	while(Valor != 0 || Apost != 0 || Result != 0){
		Ta = Apost % 100;
		Fo = Result % 100;
		if( (Apost % 10000) == (Result % 10000) )
			Valor *= 3000;
		
		else if( (Apost % 1000) == (Result % 1000) )
			Valor *= 500;
			
		else if( (Apost % 100) == (Result % 100) )
			Valor *= 50;
		
		else if( (Apost % 100)-(Result % 100) <= -97 || 97 <= (Apost % 100)-(Result % 100) )
			Valor *= 16;
			
		else if( ( (Ta/4 == Fo/4 && Ta%4 != 0 && Fo%4 != 0) || ( (Ta/4)-1 == Fo/4 && Ta%4 == 0) || (Ta/4 == (Fo/4)-1 && Fo%4 == 0) ) && ( Ta != 0 && Fo != 0 ))
			Valor *= 16;
		else
			Valor *= 0;
			
		printf("%.2lf\n", Valor);
		
		scanf("%lf %lld %lld", &Valor, &Apost, &Result);
	}
	
	
	return(0);
}