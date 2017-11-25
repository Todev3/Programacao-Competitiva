#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double N, Media=0;
	int Pro=1, Cont=0;
	
	while(Pro != 2){
		if(Pro == 1){
			while(Cont < 2){
			
				scanf("%lf", &N);
			
				if(N >= 0 && N <= 10){
					Media += N;
					Cont ++;
				}
				else
					printf("nota invalida\n");
			}
			
			printf("media = %.2lf\n", Media/2);
		}
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &Pro);
		Cont = 0;
		Media = 0;
		
	}
	
	return 0;
}