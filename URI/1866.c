#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int Vezes, Val;
	
	scanf("%d", &Vezes);
	
	while( Vezes-- ){
		
		scanf("%d", &Val);
		
		if( Val % 2 == 1 )
			printf("1\n");
		else
			printf("0\n");
		
	}
	
	return 0;
}