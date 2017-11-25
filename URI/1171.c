#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int Comp(const void *P1, const void *P2){
	
	int *A=(int *)P1, *B=(int *)P2;
	
	if(*A > *B)
		return 1;
	else if(*A == *B)
		return 0;
	else
		return -1;
}

int main(){
	int Vez, C, Axu=0, X[200010], Com;
	
	scanf("%d", &Vez);
	
	for(C=0; C < Vez; C++)
		scanf("%d", &X[C]);	
		
	qsort(X, Vez, sizeof(int), Comp);//ordena o vetor para facilitar a contagem de repetição
	
	Com = X[0];
	
	for(C=0; C < Vez; C++){
		if(X[C] == Com)//contas as vezes que aparece o numero
			Axu++;
		if(C+1 == Vez || X[C+1] != Com){//faz a saida quando termina o vetor ou quando acaba a repetição do numero, fazendo indo para o proximo
			printf("%d aparece %d vez(es)\n", X[C], Axu);
			Com = X[C+1];
			Axu = 0;
		}
	}		
	
	return 0;
}