#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int X, Y;
	scanf("%d %d", &X, &Y);
	while(X != 0 && Y != 0){
		if(X > 0 && Y > 0){printf("primeiro\n"); }
		else if(X < 0 && Y > 0){printf("segundo\n"); }
		else if(X < 0 && Y < 0){printf("terceiro\n"); }
		else{printf("quarto\n");}
		scanf("%d %d", &X, &Y);
	}
return(0);
}