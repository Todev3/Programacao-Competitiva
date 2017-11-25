#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, A, i;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &A);
		if(A != 0){
			if(A % 2 == 0){printf("EVEN ");}
			else {printf("ODD ");}
			if(A > 0){printf("POSITIVE\n");}
			else{printf("NEGATIVE\n");}
		}
		else {printf("NULL\n");}
	}
return(0);
}