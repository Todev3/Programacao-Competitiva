#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long long int K, X, Y, X1, Y1, Cont;
	
	while(1){
		
		scanf("%lld", &K);
		
		if(K == 0)
			break;
		
		scanf("%lld %lld", &X, &Y);
		
		for(Cont=0; Cont < K; Cont++){
			
			scanf("%lld %lld", &X1, &Y1);
			
			if(X == X1 || Y == Y1)
				printf("divisa\n");
			else if(X1 > X && Y1 < Y)
				printf("SE\n");
			else if(X1 < X && Y1 < Y)
				printf("SO\n");
			else if(X1 > X && Y1 > Y)
				printf("NE\n");
			else
				printf("NO\n");
			
		}
		
		
	}



	return 0;
}