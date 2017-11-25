#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int N1=0, N2=0, Resp=0, Axu=0;
	
	scanf("%d %d", &N1, &N2);
	
	while(1){
		if(N1 < N2)
			break;
		scanf("%d", &N2);
	}
	
	while(Axu < N2){
		Resp++;
		Axu += N1;
		N1++;
	}
	
	printf("%d\n", Resp);
	
	return 0;
}