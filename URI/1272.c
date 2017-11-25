#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void Limpar(){
	while( getchar() != '\n');
	return;
}

int main(){
	char Msg[60], Palavra[30];
	int NumCasos, ContCasos, i, ContP=0;
	
	scanf("%d", &NumCasos);
	Limpar();
	
	for(ContCasos=0; ContCasos < NumCasos; ContCasos++){
		
		fgets(Msg , 60, stdin);
		
		for(i=0; i <= 60; i++){
			
			if( (Msg[0] != ' ' && i == 0) ){
				Palavra[ContP] = Msg[i];
				ContP++;
			}
			
			if( ( Msg[i] == ' ' && Msg[i+1] >= 97 ) ){
				Palavra[ContP] = Msg[i+1];
				ContP++;
			}
			if(Msg[i+1] == '\n'){
				Palavra[ContP] = '\0';
				break;
			}
			
		}
	
		printf("%s\n", Palavra);
		ContP = 0;
	
	}
	
	
	return(0);
}