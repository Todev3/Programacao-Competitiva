#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 
#define MAX_ARESTAS 
#define INFINITO

#define TRUE 1
#define FALSE 0

int main(void){
	long long int Resp=0, Cont, Ini, Fim;
	
	scanf("%lld %lld", &Ini, &Fim);
	
	Resp = (Fim * (Fim + 1)) / 2;

	Resp -= ( (Ini-1) * (Ini)) / 2;
	
	printf("%lld\n", Resp);
	
	return 0;
}
