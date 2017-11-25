#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	long long int Hash, Opone;
	
	while(scanf("%lld %lld", &Hash, &Opone) != EOF){
		Hash = Hash - Opone;
		if(Hash < 0)
			Hash *= -1;
		printf("%lld\n", Hash);
	}
	
	return(0);
}