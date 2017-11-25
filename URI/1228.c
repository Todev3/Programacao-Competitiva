#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Posi[30], Posi2[30], N, Aux, cont, C, Resp=0;
	
	while(scanf("%d", &N) != EOF){
		
		Resp = 0;
		
		for(cont=0; cont < N; cont++)
			scanf("%d", &Posi[cont]);
			
		for(cont=0; cont < N; cont++)
			scanf("%d", &Posi2[cont]);
		
		cont = 0;

		do{
			
			C = N - 1;

			while(C > 0){
				if(Posi[cont] == Posi2[C] && cont != C){
					Aux = Posi2[C];
					Posi2[C] = Posi2[C - 1];
					Posi2[C - 1] = Aux;
					Resp++;
				}
				C --;
				
			}

			cont++;
		}while(cont < N);
		
			
		
		printf("%d\n", Resp);
		Resp=0;
	
	}
	
	return 0;
}