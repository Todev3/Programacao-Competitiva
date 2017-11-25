#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

#define MAX 40
#define MAXI 30

int main(void){
	int D[MAX], E[MAX], Cont, Qtd, Num, Resp;
	char Pe;
	
	while( scanf("%d", &Qtd) != EOF ){
		
		Resp = 0;
		
		for( Cont = 0; Cont <= MAXI; Cont++ ){
			D[Cont] = 0;
			E[Cont] = 0;
		}
		
		for( Cont = 0; Cont < Qtd; Cont++ ){
			scanf("%d %c", &Num, &Pe);
			
			if( Pe == 'D' )
				D[ Num - MAXI ]++;
			else if( Pe == 'E' )
				E[ Num - MAXI ]++;
		}
		
		for( Cont = 0; Cont <= MAXI; Cont++ ){
			if( D[Cont] != 0 && E[Cont] != 0 ){
				if( D[Cont] >= E[Cont] )
					Resp += E[Cont];
				else
					Resp += D[Cont];
			}
		}
		printf("%d\n", Resp);
	}
	
	return 0;
}