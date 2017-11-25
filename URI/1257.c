#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char Entrada[60];
	int SomaTotal=0, Soma=0, Elemento=0, NumCa=0, NumCaCont=0, Posi=0, Vezes=0, VezesCont=0, NumCasos=0;
	
	scanf("%d", &NumCasos); //Entra o numero de casos
	
	
	for(NumCaCont=0; NumCaCont < NumCasos; NumCaCont++){ //Controla numero de casos
		
		
		scanf("%d", &Vezes); //Recebe o numero de elementos que vai entrar
		
		for(VezesCont=0; VezesCont < Vezes; VezesCont++){ //Controla numero de entradas
			
			
			scanf("%s", Entrada); //Elemento que esta sendo informado
			
			for(Posi=0; Posi <= 55; Posi++){	//Anda na string pegando o falores e somando
					
				Soma += (Entrada[Posi] - 65) + VezesCont + Posi;
				if(Entrada[Posi+1] == '\0') //Quebra o For se achar null
					break;
					
			}
			
			SomaTotal += Soma; //Faz a soma de todos os valores gerados do caso de teste N
			Soma = 0;
		}
			
		printf("%d\n", SomaTotal);
		SomaTotal = 0;
	}
	
	return(0);
}