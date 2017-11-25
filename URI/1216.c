#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){
	char Nome[1000], A[10];
	int Dist=0, Div=0;
	double Soma=0;
	
	while(gets(Nome) != NULL){
		
		scanf("%d", &Dist);
		gets(A);//Limpando o buffer

		Soma += Dist;
		Div++;
	}
	
	printf("%.1lf\n", Soma / Div);
	
	return 0;
}