#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int I=-2, J=65;
	do{
		I += 3;
		J -= 5;
		printf("I=%d J=%d\n", I, J);
	}while(J != 0);
return(0);
}