#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main(void){
	int A, B, Sai, Acu;
	
	while(1){
		
		Sai = Acu = 0;
		
		scanf("%d %d", &A, &B);
		if(A+B == 0)
			break;
		
		while(B != 0 || A != 0){
			
			if( (B % 10 + A % 10 + Acu) >= 10){
				Sai++;
				Acu = 1;
			}
			else
				Acu = 0;
			
			B /= 10;
			A /= 10;
			
		}
		
		if(Sai == 0)
			printf("No carry operation.\n");
		else if(Sai == 1)
			printf("%d carry operation.\n", Sai);
		else
			printf("%d carry operations.\n", Sai);
		
	}
	
	return 0;
}