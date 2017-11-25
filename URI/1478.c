#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 100


int main(){
	int M[Max][Max], A, Lin, Col;
	
	while(1){
	
		scanf("%d", &A);
		if(A == 0)
			break;
		
		for(Lin=0; Lin < Max; Lin++)
			for(Col=0; Col < Max; Col++)
				M[Lin][Col] = 0;

		for(Lin=0; Lin < A; Lin++)
			for(Col=0; Col < A; Col++)
				if(Lin == Col)
					M[Lin][Col] = 1;
				else if(Lin > Col)
					M[Lin][Col] = 1 + (Lin - Col);
				else
					M[Lin][Col] = 1 + (Col - Lin);
	
	
	
		for(Lin=0; Lin < A; Lin++){
			for(Col=0; Col < A; Col++){
				printf("%3d", M[Lin][Col]);
				if(Col != A-1)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}