#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int N, Resp=0, C;
	char Ca;
	
	while(1){
	
		scanf("%d", &N);
		if(N == 0)
			break;
		
		for(C=0; C < N; C++){
			scanf(" %c", &Ca);
			if(Ca == 'D')// soma 1 quando vira para direita
				Resp++;
			else
				Resp--;	//subtrai 1 quando vira para esquerda
		}
		
		if(Resp % 4 == 0)//quando o mode for 0 ele é norte
			printf("N\n");
		else if(Resp % 4 == 1 || Resp % 4 == -3)// quando mod for 1 ou -3 é leste
			printf("L\n");
		else if(Resp % 4 == 2 || Resp % 4 == -2)//quando mod for 2 ou -2 é sul
			printf("S\n");
		else
			printf("O\n");//quando mod for 1 ou 3 é oeste
			
		Resp=0;
		
	}
	
	return 0;
}