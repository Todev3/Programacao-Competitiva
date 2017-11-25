#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	long int Velo, Tempo;
	
	while( scanf("%ld %ld", &Velo, &Tempo) != EOF){
		printf("%ld\n", Velo * (Tempo * 2));
	}
	
	
	return(0);
}