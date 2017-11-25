#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int i; 
	long int Mary=0, John=0, Resp, Vezes;
	
	scanf("%d", &Vezes);
	while(Vezes != 0){
		for(i=0; i < Vezes; i++){
			scanf("%d", &Resp);
			if(Resp == 0)
				Mary++;
			else
				John++;	
		}
		printf("Mary won %d times and John won %d times\n", Mary, John);
		Mary=0;
		John=0;
		scanf("%d", &Vezes);
	}
	
	return(0);
}