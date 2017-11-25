#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	double A, B;
	int X, Y;
	scanf("%lf %lf", &A, &B);
	
	X = (int)(A * 10);
	Y = (int)(B *10);
	
	if(X > 0 && Y > 0){printf("Q1\n");}
	else if(X > 0 && Y < 0){printf("Q4\n");}
	else if(X < 0 && Y > 0){printf("Q2\n");}
	else if(X < 0 && Y < 0){printf("Q3\n");}
	else if( (X < 0 || X > 0) && Y == 0){printf("Eixo Y\n");}
	else if(X == 0 && (Y > 0 || Y < 0) ){printf("Eixo X\n");}
	else  if(X == 0 && Y == 0){printf("Origem\n");}
return(0);
}