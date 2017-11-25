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
	int N;
	double Sai;
	
	scanf("%d", &N);
	
	Sai = pow(3, N);
	
	printf("%.0lf\n", Sai);
	
	return 0;
}