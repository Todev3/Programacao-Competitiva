#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Cont, Rep, C, Tam, Ts, Cc, Ce=0;
	char S[100010], R[110];
	
	scanf(" %d", &Vez);
	for(Cont=0; Cont < Vez; Cont++){
	
		scanf(" %s %d", S, &Rep);
		
		Ts = strlen(S);
		
		for(C=0; C<Rep; C++){
		
			scanf(" %s", R);
		
			Tam = strlen(R);
		
			for(Cc=0; Cc<Ts;Cc++){
				if(R[Ce] == S[Cc])
					Ce++;
				if(Ce == Tam)
					break;
			}
	
			if(Ce == Tam)
				printf("Yes\n");
			else
				printf("No\n");
	
			Ce=0;
		}
	}
	
	
	return 0;
}