#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Cont, Resp, Axu[1002], Temp=0, Temp2=0;
	
	while(1){
		
		Temp = Temp2 = 0;
		
		scanf("%d", &Vez);
		if(Vez == 0)
			break;
			
		for(Cont=0; Cont<Vez; Cont++)
			scanf("%d", &Axu[Cont]);
		
		for(Cont=0; Cont<Vez; Cont++)
			if(Axu[Cont] > Temp)
				Temp = Axu[Cont];
		
		for(Cont=0; Cont<Vez; Cont++){
			if(Axu[Cont] > Temp2 && Axu[Cont] != Temp){
				Temp2 = Axu[Cont];
				Resp = Cont+1;
			}
		}
	
		printf("%d\n", Resp);
		
	
	}
	
	return 0;
}