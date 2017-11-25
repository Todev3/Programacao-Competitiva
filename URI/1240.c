#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vezes, Cont, Mod=10;
	long long int N1, N2, auxiliar;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
		
		scanf("%lld %lld", &N1, &N2);
		auxiliar = N2;
		if(N1 < N2)
			printf("nao encaixa\n");
		
		else{	
			while(N2 / 10 != 0){
				N2 /= 10;
				Mod *= 10;
			}
			
			if(N1 % Mod == auxiliar)
				printf("encaixa\n");
			else
				printf("nao encaixa\n");
		}
		
		Mod = 10;
		
	}
	
	return 0;
}