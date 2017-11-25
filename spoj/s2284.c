#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 50


int main(){
	char A[Max];
	int Soma, Cont, Lim, B;
	
	while(scanf("%s", A) != EOF){
		
		Soma = Cont = 0;
		
		while(A[Cont] != '\0'){
			if(A[Cont] >= 'a' && A[Cont] <= 'z')
				Soma += (A[Cont] - 'a') + 1;
			
			if(A[Cont] >= 'A' && A[Cont] <= 'Z')
				Soma += (A[Cont] - 'A') + 27;
			
			Cont++;	
		}
		
		B = (int)sqrt(Soma);
		
		for(Cont=2; Cont <= B; Cont++){
			if(Soma%Cont == 0)
				break;
		}
		
		if(Cont <= B)
			printf("It is not a prime word.\n");
		else
			printf("It is a prime word.\n");
	}

	return 0;
}