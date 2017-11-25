#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int cont, num=7, I=1;
	
	for(cont=1; cont <=15; cont++){
		
		
		printf("I=%d J=%d\n", I, num);
		num --;
		
		if(cont%3 == 0){
			I +=2;
			num += 5;
		}
	}
	
	return(0);
}