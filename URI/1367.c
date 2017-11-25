#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Temp, Cont, Axu[30], Soma=0, A=0;
	char Pa[15], Ent;
	
	while(1){
		
		for(Cont=0; Cont<26; Cont++)
			Axu[Cont] = 0;
		
		scanf("%d", &Vez);
		if(Vez == 0)
			break;
			
		for(Cont=0; Cont<Vez; Cont++){
		
			scanf(" %c %d %s", &Ent, &Temp, Pa);
			
			if(strcmp(Pa, "incorrect") == 0)
				Axu[Ent-'A'] += 20;
			else{
				Soma += Axu[Ent-'A'] + Temp;
				A++;
			}
		
		
		}
	
		printf("%d %d\n", A, Soma);
		
		A = Soma = 0;
		
	}
	
	return 0;
}