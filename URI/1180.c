#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vetor[1000], Cont=0, NumEle=0, Menor=0, Posi=0;
	
	scanf("%d", &NumEle);
	
	for(Cont=0; Cont < NumEle; Cont++)
		scanf(" %d", &Vetor[Cont]);
		
	Menor =  Vetor[0];
	Posi = 0;
		
	for(Cont=0; Cont < NumEle; Cont++)
		if(Menor > Vetor[Cont]){
			Menor =  Vetor[Cont];
			Posi = Cont;
	}
	
	printf("Menor valor: %d\nPosicao: %d\n", Menor, Posi);
	return(0);
}