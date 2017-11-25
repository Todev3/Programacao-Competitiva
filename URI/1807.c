#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

long long int DivTest( long long int Num, long long int Mult, long long int Max){
	
	long long int R = 1;
	
	while( Mult ){
		
		if( Mult % 2 )
			R = (R * Num) % Max;
		
		Num = (Num * Num) % Max;
			
		Mult /= 2;	
			
	}
	
	return R;
	
}

int main(void){
	long long int Num  = 3, Mult, Max;
	
	Max = ((long long int)pow(2,31)) - 1;
	
	while( scanf("%lld", &Mult) != EOF ){
		
		printf("%lld\n", DivTest( Num, Mult, Max));
		
	}
	
	return 0;
}