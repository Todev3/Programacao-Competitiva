#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, Num, Soma=0, i=0, Cont;
	scanf("%d", &N);
	do{
		i++;
		scanf("%d", &Num);
		for(Cont=1; Cont < Num; Cont++){
			if( (Num%Cont) == 0){Soma += Cont;}
		}
		if(Soma == Num)
			printf("%d eh perfeito\n", Num);
		else
			printf("%d nao eh perfeito\n", Num);
		Soma=0;
	}while(i != N);
	
return(0);
}