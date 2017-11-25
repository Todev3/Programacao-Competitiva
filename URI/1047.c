#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, a, B, b, m, h;
	scanf("%d %d %d %d", &A, &a, &B, &b);
	if(a > b){
		m = (60 - a) + b;
	}
	else {
		m = b - a;
	}
	if(A > B){
		h = (24 - A) + B;
		if(m != 0 && a > b){h = h - 1; }
	}
	else {
		h = B - A;
		if(m != 0 && a > b){h = h - 1; }
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
return(0);
}