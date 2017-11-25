#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){
	int N, C, Ent, Sai, U;
	
	Sai = 0;
	
	while(1){
		
		Sai++;
		
		scanf("%d", &N);
		if(N == 0)
			break;
			
		for(C=0; C < N; C++){
			scanf("%d", &Ent);
			if(C+1 == Ent)
				U = Ent;
		}
		
		printf("Teste %d\n", Sai);
		printf("%d\n\n", U);
	
	}

	return 0;
}