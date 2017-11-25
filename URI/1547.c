#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Cont, Cami, Num, C, Alu[12], Axu=0, T, Ta;
	
	scanf("%d", &Vez);
	
	for(Cont=0; Cont < Vez; Cont++){
	
		scanf("%d %d", &Cami, &Num);
		
		for(C=0; C < Cami; C++)//recolhendo os valores informado pelos alunos
			scanf("%d", &Alu[C]);
			
		for(C=0; C < Cami; C++){//correndo o vetor checando o numero mais proximo
			
			if(C == 0){//atribuindo a primeira vez para nao dar erro
				Axu = C;
				Ta = Alu[C] - Num;
				if(Ta < 0)//se a subtração der negativo, tranforma em positivo
					Ta *= -1;
			}	
			else{//compara para achar o que da o mais proximo de zero ou da zero
				
				T = Alu[C] - Num;
			
				if(T < 0)//caso der negativo tranforma em positivo
					T *= -1;
			
				if(T < Ta){
					Axu = C;
					Ta = T;
				}
			}
		}
		
		printf("%d\n", Axu+1);
	
	
	}
	
	return 0;
}