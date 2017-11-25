#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vezes=0, Notas=0, N=0, Cont=0, ContNotas=0, mNotas[1000];
	double Media=0, Porcent=0;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf(" %d", &Notas);
		
		for(ContNotas=0; ContNotas < Notas; ContNotas++){
			scanf(" %d", &N);
			Media += N;
			mNotas[ContNotas] = N;
		}
		
		Media /= Notas;
		
		for(ContNotas=0; ContNotas < Notas; ContNotas++)
			if(Media < mNotas[ContNotas])
				Porcent++;
		
		Porcent = Porcent / Notas * 100;
		
		printf("%.3lf%\n", Porcent);
		
		Porcent = 0;
		Media = 0;
		
	}
	
	return 0;
}