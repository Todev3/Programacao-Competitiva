#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int X, Y, i;
	scanf("%d %d", &X, &Y);
	i = (X + Y -abs(X - Y))/2;
	Y = (X + Y +abs(X - Y))/2;
	for(i++;i < Y; i++){
		if(i % 5 == 2 || i % 5 == 3){printf("%d\n", i);}
	}
return(0);
}