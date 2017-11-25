#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void){
	char Frase, Ant = '1', Atu = '1';
	int Cont;
	
	while( scanf("%c", &Frase) != EOF){
		
		if( Frase == 'F' || Frase == 'Z' || Frase == 'J' || Frase == 'P' || Frase == 'S' || Frase == 'V' || Frase == 'B' || Frase == 'X' ){
			Atu = 'F';
		}
		else if( Frase == 'f' || Frase == 'z' || Frase == 'j' || Frase == 'p' || Frase == 's' || Frase == 'v' || Frase == 'b' || Frase == 'x' ){
			Atu = 'f';
		}
		else{
			Atu = Frase;
		}
		
		if( ( Atu == 'f' || Atu == 'F' ) && ( Ant == 'f' || Ant == 'F' ) ){
		}
		else
			printf("%c", Atu);
			
		Ant = Atu;
		
	}
	
	return 0;
}