#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int A, B, R=0, i, T;
	scanf("%d %d", &A, &B);
	if(B > A){
		A++;
		for(i = A; i < B; i++){
			if(i < 0){T = i * (-1);}
			else{ T = i;}
			if(T % 2 == 1){
			R = R + i;}
		}
	}
	else{
		B++;
		for(i = B; i < A; i++){
			if(i < 0){T = i * (-1);}
			else{ T = i;}
			if(T % 2 == 1){
			R = R + i;}
		}
	}
	printf("%d\n", R);
return(0);
}