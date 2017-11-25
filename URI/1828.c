#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 
#define MAX_ARESTAS 50
#define INFINITO

#define TRUE 1
#define FALSE 0

int main(void){
	char Str1[MAX_ARESTAS], Str2[MAX_ARESTAS];
	int Vez, Cont;
	
	scanf("%d", &Vez);
	
	for( Cont = 0; Cont < Vez; Cont++ ){
		
		scanf("%s %s", Str1, Str2);
		
		printf("Caso #%d: ", Cont+1);
		
		if( strcmp(Str1, Str2) == 0 )
			printf("De novo!\n");
		else if( strcmp(Str1, "tesoura") == 0 && ( strcmp("papel", Str2) == 0 || strcmp("lagarto", Str2) == 0 ) ){
			printf("Bazinga!\n");
		}
		else if( strcmp(Str1, "pedra") == 0 && ( strcmp("lagarto", Str2) == 0 || strcmp("tesoura", Str2) == 0 ) ){
			printf("Bazinga!\n");
		}
		else if( strcmp(Str1, "papel") == 0 && ( strcmp("pedra", Str2) == 0 || strcmp("Spock", Str2) == 0 ) ){
			printf("Bazinga!\n");
		}
		else if( strcmp(Str1, "lagarto") == 0 && ( strcmp("Spock", Str2) == 0 || strcmp("papel", Str2) == 0 ) ){
			printf("Bazinga!\n");
		}
		else if( strcmp(Str1, "Spock") == 0 && ( strcmp("tesoura", Str2) == 0 || strcmp("pedra", Str2) == 0 ) ){
			printf("Bazinga!\n");
		}
		else
			printf("Raj trapaceou!\n");
		
	}
	
	return 0;
}