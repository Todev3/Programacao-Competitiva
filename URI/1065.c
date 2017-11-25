#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, B, C, D, E, Cont=0;
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	if(A % 2 == 0){ Cont++;}
	if(B % 2 == 0){ Cont++;}
	if(C % 2 == 0){ Cont++;}
	if(D % 2 == 0){ Cont++;}
	if(E % 2 == 0){ Cont++;}
	printf("%d valores pares\n", Cont);
return(0);
}