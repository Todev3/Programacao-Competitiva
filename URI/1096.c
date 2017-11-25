#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int I=1, J=8, Con=0;
	do{
		if(Con == 3){
			I += 2;
			J = 8;
			Con = 0;
		}
		J -= 1;
		printf("I=%d J=%d\n", I, J);
		Con++;
	}while(I != 9 || J != 5);
	
return(0);
}