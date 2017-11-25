#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double Resp, L=0, M=0;
	
	while(1){
	
		scanf("%lf", &L);
		if(L == 0)
			break;
			
		if(L == 3)
			M = 3;
		else
			M = 3 + ((L - 3) * 2);
		
		Resp = (M - L) / L;
		
		printf("%.6lf\n", Resp);
		
	}
	
	return 0;
}