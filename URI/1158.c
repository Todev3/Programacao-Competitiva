#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int N1, N2, Vezes, Cont, Cont2, Resp=0;

	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
	scanf("%d %d", &N1, &N2);
	
	if(N1 % 2 == 0)
		N1++;
	
	for(Cont2=0; Cont2 < N2; Cont2++){
		Resp += N1;
		N1 += 2;
	}
	
	printf("%d\n", Resp);
	Resp = 0;
	}
	return 0;
}