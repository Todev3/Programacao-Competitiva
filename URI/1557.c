#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 100


int main(){
	int M[Max][Max], A, Lin, Col, Pot, Tam, V, Y, Axi;
	
	while(1){
	
		scanf("%d", &A);
		if(A == 0)
			break;
		
		for(Lin=0; Lin < Max; Lin++)
			for(Col=0; Col < Max; Col++)
				M[Lin][Col] = 0;

			
		for(Lin=0; Lin < A; Lin++){
			Pot = Lin;
			for(Col=0; Col < A; Col++){
					M[Lin][Col] = pow(2, Pot);
					Pot++;
			}
		}
		
		Tam = pow(2, (A-1)*2);
		
		for(V=0; Tam != 0; V++)
			Tam /= 10;
	
	
		for(Lin=0; Lin < A; Lin++){
			for(Col=0; Col < A; Col++){
				Axi = M[Lin][Col];
				
				for(Y=0; Axi != 0; Y++)
					Axi	/= 10;
					
				for(Tam=0; Tam < V - Y; Tam++)
					printf(" ");

				printf("%d",M[Lin][Col]);
				
				if(Col != A-1)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}