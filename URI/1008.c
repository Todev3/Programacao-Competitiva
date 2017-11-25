#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int Num, Hrs;
	float Sal;
	scanf("%d %d %f", &Num, &Hrs, &Sal);
	Sal = Hrs * Sal;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", Num, Sal);
return(0);
}