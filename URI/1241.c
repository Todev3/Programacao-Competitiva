#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char A[1005], B[1005];
	int Vezes, Cont, TamA, TamB, F, Comp, Axu=0;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf("%s %s", A, B);
		
		TamA = strlen(A);
		TamB = strlen(B);
		
		if( TamA < TamB)
			printf("nao encaixa\n");
		else{
			
			F = TamA - TamB;//Achando de qual posicao comecar a comparacao

			for(Comp=F; Comp < TamA; Comp++)//compara os caracteres da segunda string na primeira
				if(A[Comp] == B[Axu])
					Axu++;
				else
					break;
			

			
			if(TamB == Axu)//se a soma do Axu der o msm tamanho da segunda string que dizer que se encaixao
				printf("encaixa\n");
			else
				printf("nao encaixa\n");
		}
		
		Axu = 0;
		
	}
	
	return 0;
}