#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int X, Y;
	do{
		scanf("%d %d", &X, &Y);
		if(X > Y){printf("Decrescente\n"); }
		if(X < Y){ printf("Crescente\n");}
	}while(X != Y);
return(0);
}