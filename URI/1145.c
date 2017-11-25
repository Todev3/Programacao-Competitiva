#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int X, Y, i, R=1;
	scanf("%d %d", &X, &Y);
	do{
		for(i = 1; i <= X; i++){
			if (i == X) {printf("%d\n", R);}
			else {printf("%d ", R);}
			R++;
		}
	}while(R < Y);
return(0);
}