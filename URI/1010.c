#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	float V1, V2;
	int Id, Qtd, Qtd2;
	scanf("%d %d %f %d %d %f", &Id, &Qtd, &V1, &Id, &Qtd2, &V2);
	V1 = (Qtd * V1) + (Qtd2 * V2);
	printf("VALOR A PAGAR: R$ %.2f\n", V1);
return(0);
}