#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Ma[70][70], Lin, Col, Num;
	
	
	while(scanf("%d", &Num) != EOF){
	
		for(Lin=0; Lin < Num; Lin++)
			for(Col=0; Col < Num; Col++)
				if(Lin + Col == Num-1)
					Ma[Lin][Col] = 2;
				else if(Lin == Col)
					Ma[Lin][Col] = 1;
				else
					Ma[Lin][Col] = 3;
		
		for(Lin=0; Lin < Num; Lin++){
			for(Col=0; Col < Num; Col++)
				printf("%d", Ma[Lin][Col]);
			
			printf("\n");
		}
	
	}
	
	return(0);
}