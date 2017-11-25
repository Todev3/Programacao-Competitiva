#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Casos, Cont, Reg, Che, L;
	char P[55];
	
	scanf(" %d", &Casos);
	
	for(Cont=0; Cont < Casos; Cont++){
	
		scanf(" %s %d", P, &Reg);
		
		L = strlen(P) ;
		
		for(Che=0; Che < L; Che++){
			
			if(P[Che]-Reg < 'A')
				P[Che] = ( P[Che]-Reg ) + 26;
			else
				P[Che] -= Reg;

		}
	
		printf("%s\n", P);
	
	
	}
	
	return 0;
}