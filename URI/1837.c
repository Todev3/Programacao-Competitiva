#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main(void){
	int A, B, R, Q, Cont;
	
	while( scanf("%d %d", &A, &B) != EOF ){
		
		R = A % B;

		if( R >= 0 && R < abs(B) )
			printf("%d %d\n", A/B, R);
		else{
			
			if( B > 0){
				for( Cont = 1; (Cont * B ) * -1 >= A; Cont++ );
				Q = Cont * -1;
			}
			else{
				for( Cont = 1; (Cont * B ) >= A; Cont++ );
				Q = Cont;
			}
			
			
			R = A - (B * Q);
			
			printf("%d %d\n", Q, R);
		}
			
	}
	
	return 0;
}