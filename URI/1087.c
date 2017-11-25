#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
	int X1, X2, Y1, Y2, Resp, Aux, Axu;
	
	while(1){
		
		scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
		
		if( (X1+X2+Y1+Y2) == 0)
			break;
		
		Aux = X1 - X2;
		if(Aux < 0)
			Aux *= -1;
		Axu = Y1 - Y2;
		if(Axu < 0)
			Axu *= -1;
		
		if(X1 == X2 && Y1 == Y2)
			Resp = 0;
		else if(Y1 == Y2)
			Resp = 1;
		else if(X1 == X2)
			Resp =  1;
		else if( Aux == Axu )
			Resp = 1;		
		else{
			Resp = 2;
		}
		
		printf("%d\n", Resp);
		
	}
	
	
	
	return 0;
}