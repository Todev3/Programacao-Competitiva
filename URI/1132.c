#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int X, Y, R=0, i;
	scanf("%d %d", &X, &Y);
	i = (X + Y - abs(X - Y)) / 2;
	X = (X + Y + abs(X - Y)) / 2;
	for(;i <= X; i++){
		if(i%13 != 0){R += i;}
	}
	printf("%d\n", R);
return(0);
}