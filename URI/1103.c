#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int H1, H2, M1, M2, Resp, Aux;
	
	while(1){
	
		scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
		if( (H1 + H2 + M1 + M2) == 0)
			break;
			
		if(H1 < H2)
			Resp = (H2 - H1) * 60 + (M2 - M1);
		else if(H1 == H2){
			if(M1 > M2)
			Resp = (24 * 60) + (M2 - M1);
			else
			Resp = (H2 - H1) * 60 + (M2 - M1);
		}
		else
			Resp = ((23 - H1) * 60) + (H2 * 60) + ( (60 - M1) + M2);
		
		printf("%d\n", Resp);
	
	}
	
	return 0;
}