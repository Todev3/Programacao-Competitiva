#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Gre, G=0, Inter, I=0, Grenal=0, Dec, Empates=0;
	
	
	while(1){
	
		Grenal++;
		
		scanf("%d %d", &Inter, &Gre);
		
		if(Inter > Gre)
			I++;
		else if(Inter == Gre)
			Empates++;
		else
			G++;
			
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &Dec);
		if(Dec == 2)
			break;
			
	}
	
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", Grenal, I, G, Empates);
	
	if(I > G)
		printf("Inter venceu mais\n");
	else if(I == G)
		printf("Nao houve vencedor\n");
	else
		printf("Gremio venceu mais\n");
	
	return(0);
}