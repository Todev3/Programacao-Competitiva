#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
	int Vezes, Cont, Num, C, Resp;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
		Resp = 0;
		scanf("%d", &Num);
		char Com[Num+2];
		int Pu[Num];
		
		for(C=0; C < Num; C++)
			scanf("%d", &Pu[C]);
		
		scanf("%s", Com);
		
		for(C=0; C < Num; C++)			
			if(Com[C] == 'S' && Pu[C] < 3 || Com[C] == 'J' && Pu[C] > 2)
				Resp++;

		printf("%d\n", Resp);
		
	}
	return 0;
}