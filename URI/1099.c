#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Num, Soma=0, Cont, N1, N2;
	
	scanf("%d", &Num);
	
	for(Cont=0; Cont < Num; Cont++){
		
		scanf("%d %d", &N1, &N2);
		
		if(N2 > N1){
			Soma = N1;
			N1 = N2;
			N2 = Soma;
		}
		
		Soma = 0;

		for(N2++; N2 < N1; N2++){
			if(N2 % 2 == 1)
				Soma += N2;
				}
		
		printf("%d\n", Soma);
		
	}
	
	return(0);
}