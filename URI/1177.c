#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int N[1000], T, Cont, Val=0;
	
	scanf("%d", &T);
	
	for(Cont=0; Cont < 1000; Cont++){
		N[Cont] = Val;
		Val++;
		if(Val == T)
			Val = 0;
	}
	
	for(Cont=0; Cont < 1000; Cont++)
		printf("N[%d] = %d\n", Cont,N[Cont]);
	
	return 0;
}