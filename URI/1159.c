#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	long int N, Soma=0, i;
	scanf("%ld", &N);
	do{
		if(N%2 == 0){
			Soma +=N;
			Soma +=N + 2;
			Soma +=N + 4;
			Soma +=N + 6;
			Soma +=N + 8;
		}
		else 
		{
			Soma +=N + 1;
			Soma +=N + 3;
			Soma +=N + 5;
			Soma +=N + 7;
			Soma +=N + 9;
		}
		printf("%ld\n", Soma);
		Soma = 0;
		scanf("%ld", &N);
	}while(N != 0);
return(0);
}