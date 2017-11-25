#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_NOME 100

int main(void){
	int Vezes, Forca;
	char Nome[MAX_NOME];
	
	scanf("%d", &Vezes);
	
	while( Vezes-- ){
		
		scanf("%s %d", Nome, &Forca);
		
		if( strcmp(Nome, "Thor") == 0 )
			printf("Y\n");
		else
			printf("N\n");
		
	}
	
	return 0;
}