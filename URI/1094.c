#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int Test, QtdCob, Pc=0, Pr=0, Ps=0, Total=0, Cont;
	float Rc, Rr, Rs;
	char Espe;
	scanf("%d", &Test);
	for(Cont = 0; Cont < Test; Cont++){
		scanf("%d %c", &QtdCob, &Espe);
		if(Espe == 'C'){
			Pc += QtdCob;
		}
		else if(Espe == 'R'){
			Pr += QtdCob;
		}
		else{
			Ps += QtdCob;
		}
	}
	Total = Pc + Pr + Ps;
	printf("Total: %d cobaias\n", Total);
	printf("Total de coelhos: %d\n", Pc);
	printf("Total de ratos: %d\n", Pr);
	printf("Total de sapos: %d\n", Ps);
	Rc = (Pc * 100.0) / Total;
	Rr = (Pr * 100.0) / Total;
	Rs = (Ps * 100.0) / Total;
	printf("Percentual de coelhos: %.2f %%\n", Rc);
	printf("Percentual de ratos: %.2f %%\n", Rr);
	printf("Percentual de sapos: %.2f %%\n", Rs);
return(0);
}