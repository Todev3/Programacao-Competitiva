#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 1005

#define TRUE 1
#define FALSE 0

void Limpa(){
	while(getchar() != '\n');
}

void Arru(char * A){
	/* Movendo o ponteiro em vez de usar o indice */
	while(*A != '\n' && *A != '\r' && *A != '\0')
		A++;
	
	*A = '\0';
}

int main(void){
	char String[MAX_TAM];
	int Usadas[27], ContVezes, Vezes, ContString, Resp;
	
	scanf("%d", &Vezes);
	
	Limpa();
	
	for(ContVezes=0; ContVezes < Vezes; ContVezes++){
		
		for(ContString=0; ContString < 26; ContString++)
			Usadas[ContString] = 0;
		
		fgets(String, MAX_TAM, stdin);
		
		Arru(String);
		ContString = 0;
		
		while(String[ContString] != '\0'){
			if(String[ContString] >= 'a' && String[ContString] <= 'z')
				Usadas[ String[ContString] - 'a' ]++;
			
			ContString++;
		}
		
		Resp = 0;
		
		for(ContString=0; ContString < 26; ContString++)
			if(Usadas[ContString] > 0)
				Resp++;
			
		if(Resp == 26)
			printf("frase completa\n");
		else if(Resp >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
		
	}
	
	return 0;
}