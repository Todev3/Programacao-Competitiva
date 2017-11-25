//lembrar* nesse problema só entra string com numeros pares de caracteres
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void Limpar(){//Limpa o buffer do teclado
	while(getchar() != '\n');
}

int main(){
	char Frase[103], Mostrar[103];
	int Vezes, Cont, ContV, i=0, Tam, Con=0;
	
	scanf("%d", &Vezes);
	Limpar();
	for(ContV=0; ContV < Vezes; ContV++){
	
		fgets(Frase, 103, stdin);
		
		while(Frase[Con] != '\0'){
			if(Frase[Con] == '\n' || Frase[Con] == '\r'){//elimina o retorno de linho ou o quebra de linha
				Frase[Con] = '\0';
				break;
			}
			Con++;
		}
		
		Con = 0;
		
		Tam = strlen(Frase);//acha o tamanho da string 
		i = Tam / 2;//Acha o emio da string
	
		for(Cont=i-1; Cont >= 0; Cont--){//pega a primeiraparte invertida	
			Mostrar[Con] = Frase[Cont];
			Con++;
		}
	
	
		for(Cont=Tam-1; Cont >= i; Cont--){//pega a seunga parte invetida
			Mostrar[Con] = Frase[Cont];
			Con++;
		}
	
		Mostrar[Con] = '\0';
		printf("%s\n", Mostrar);
		
		Con = 0;
		
	}
	
	
	return 0;
}