#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct { 
	int numerador, denominador;
} TRac;

int mdc(int n, int m){
	if(n < 0) n = -n;
	if(m < 0) m = -m;
	
	if(n == 0)
		return 1;
	else if(n % m == 0)
		return m;
	else
		return mdc(m, n % m);
	
}

TRac SomaRacionais(TRac p1, TRac p2){
	TRac r;
	
	r.numerador = p1.numerador * p2.denominador + p2.numerador * p1.denominador;
	
	r.denominador = p1.denominador * p2.denominador;
	
	return r;
}

TRac SubtraiRacionais(TRac p1, TRac p2){
	TRac r;
	
	r.numerador = p1.numerador * p2.denominador - p2.numerador * p1.denominador;
	
	r.denominador = p1.denominador * p2.denominador;
	
	return r;
}

TRac MultiplicaRacionais(TRac p1, TRac p2){
	TRac r;
	
	r.numerador = p1.numerador * p2.numerador;
	
	r.denominador = p1.denominador * p2.denominador;
	
	return r;
}

TRac DivideRacionais(TRac p1, TRac p2){
	TRac r;
	
	r.numerador = p1.numerador * p2.denominador;
	
	r.denominador = p1.denominador * p2.numerador;
	
	return r;
}

int main(void){
	TRac n1, n2, Resp;
	int Simp, Vezes, VezesCont;
	char VarComp;
	
	scanf("%d", &Vezes);
	
	for(VezesCont=0; VezesCont < Vezes; VezesCont++){
	
		scanf("%d / %d %c %d / %d", &n1.numerador, &n1.denominador, &VarComp,&n2.numerador, &n2.denominador);
		
		if(VarComp == '+'){
			Resp = SomaRacionais(n1, n2);
		}
		else if(VarComp == '-'){
			Resp = SubtraiRacionais(n1, n2);
		}
		else if(VarComp == '*'){
			Resp = MultiplicaRacionais(n1, n2);
		}
		else if(VarComp == '/'){
			Resp = DivideRacionais(n1, n2);
		}
		
		Simp = mdc(Resp.numerador, Resp.denominador);
		
		printf("%d/%d = %d/%d\n", Resp.numerador, Resp.denominador, Resp.numerador/Simp, Resp.denominador/Simp);
		
	}
	
	
	return 0;
}