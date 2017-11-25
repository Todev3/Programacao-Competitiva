#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>



int main(){
	int Vezes, Num, Cont, C, Vagas[50], Resp=0, Axu;
	char Test;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
		
		scanf("%d", &Num);
		
		for(C=0; C < Num; C++)
			scanf("%d", &Vagas[C]);
		Resp=0;
		do{
			Test = 0;
			C = 0;
			
			while(C < Num - 1){
			
				if(Vagas[C] > Vagas[C + 1]){
				
					Axu = Vagas[C];
					Vagas[C] = Vagas[C + 1];
					Vagas[C + 1] = Axu;
					Resp++;
					Test = 1;
				}
				
				C++;
				
			}
		
			Num--;
		
		}while(Test);
	
		printf("Optimal train swapping takes %d swaps.\n", Resp );
	
	}
	
	return 0;
}