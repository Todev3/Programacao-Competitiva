#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){
	char Palavra[1005], Val=0;
	int i=0, T=0, A=0, Oi=0, Guarda[135], Posi=33, Qtd=1010;
	
	while( scanf("%s", Palavra) != EOF ){
			
		for(i=0; i <= 130; i++) //Zerando todas as posicoes
			Guarda[i] = 0;
		
		for(i=0; i <= 1005; i++){	//Contando quantidade de cada elemento 
			Val = Palavra[i];
			Guarda[Val]+=1;
			if(Palavra[i+1] == '\0')
				break;
		}
		
		for(i=33; i <= 127; i++)	//Verificando quantas posicoes estao sendo usadas
			if(Guarda[i] > 0)
				T++;
		
		if(Oi != 0)
			printf("\n"); //Regular o \n, espaço entre cada caso
		Oi++;
			
		for(A=0; A < T; A++){	//faz a comparacao T vezes 
		
			for(i=33; i <= 127; i++){
				if(i >= Posi && Guarda[i] <= Qtd && Guarda[i] != 0){ //Comparação dos valores
					Posi = i;
					Qtd = Guarda[i];
				}
			}
	
			printf("%d %d\n", Posi, Qtd);
			Guarda[Posi] = 1010;	//mudando valor da posição para ela noa entrar mais na comparacao
			Posi = 33; //resetando varial
			Qtd = 1010; //resetando varial
			
		}
		
		T=0; //resetando varial
	}
	return(0);
}