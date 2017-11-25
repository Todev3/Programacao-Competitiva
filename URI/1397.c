#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int A, B, Vez, Cont, Ra, Rb;
	
	while(1){
	
		Ra = Rb = 0;
	
		scanf("%d", &Vez);
		
		if(Vez == 0)
			break;
			
		for(Cont=0; Cont < Vez; Cont++){
			scanf("%d %d", &A, &B);

			if(A > B)
				Ra++;
			if(A < B)
				Rb++;
		}
	
		printf("%d %d\n", Ra, Rb);
	
	
	}
	
	return 0;
}