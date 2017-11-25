#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, i;
	scanf("%d", &A);
	while(A != 0){
		for(i = 1; i <= A; i++){
			if(i == A){printf("%d\n", i);}
			else {printf("%d ", i);}
		}
		scanf("%d", &A);
	}
return(0);
}