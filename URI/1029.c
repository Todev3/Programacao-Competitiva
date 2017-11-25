#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int Con=0;

int Fib(int A){
	Con++;
	if(A == 0)
		return 0;
	else if(A == 1)
		return 1;
	else if(A > 1){
		return Fib(A - 1) + Fib(A -  2);
		}
}

int main(){
	int Cont, Vezes, N;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	scanf("%d", &N);
	
	printf("fib(%d) = %d calls = %d\n", N, Con-1,Fib(N));
	Con = 0;
	}

	return 0;
}