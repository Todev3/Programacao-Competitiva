#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int Si, H, M, S;
	scanf("%d", &Si);
	H = Si / 3600;
	M = (Si % 3600) / 60;
	S = (Si % 3600) % 60;
	printf("%d:%d:%d\n", H, M, S);
return(0);
}