#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	if(A < B){
		B = B - A;
	}
	else { B = (24 - A) + B;}
	printf("O JOGO DUROU %d HORA(S)\n", B);
return(0);
}