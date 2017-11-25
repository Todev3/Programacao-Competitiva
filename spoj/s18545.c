#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct { 
	int numerador, denominador;
} TRac;

int mdc(int n, int m){
	if(n < 0) n = -n;
	if(m < 0) m = -m;

	if(n % m == 0)
		return m;
	else
		return mdc(m, n % m);
	
}

int main(void){
	
	TRac p1, p2, r;
	int Div;
	
	scanf("%d %d", &p1.numerador, &p1.denominador);
	scanf("%d %d", &p2.numerador, &p2.denominador);
	
	
	r.numerador = p1.numerador * p2.denominador + p2.numerador * p1.denominador;
	r.denominador = p1.denominador * p2.denominador;

	Div = mdc(r.numerador, r.denominador);
		
	printf("%d %d\n", r.numerador/Div, r.denominador/Div);
	
	return 0;
}