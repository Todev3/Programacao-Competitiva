#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, i, R, Rt, ii=1;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%d", &R);
		do{
			ii++;
			Rt = R % ii;
		}while(Rt !=0 && Rt < R);
		if(ii == R){printf("%d eh primo\n", R);}
		else {printf("%d nao eh primo\n", R);}
		ii = 1;
	}
return(0);
}