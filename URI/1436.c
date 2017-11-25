#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vezes, Equip, Idades, ContV, ContI, Resp;
	
	scanf("%d", &Vezes);
	
	for(ContV=0; ContV < Vezes; ContV++){
	
		scanf("%d", &Equip);
		
		for(ContI=0; ContI < Equip; ContI++){
			scanf("%d", &Idades);
			if(ContI == Equip/2)
				Resp = Idades;	
		}
	
		printf("Case %d: %d\n", ContV+1, Resp);
	
	}
	
	return 0;
}