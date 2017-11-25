#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

struct ProPrc{
	char P[60];
	double Prec;
};


int main(){
	struct ProPrc List[10000], ProL;
	int Vez, Cont, Ent, C, Ch, ContP;
	double Resp;
	
	scanf(" %d", &Vez);
	
	for(Cont=0; Cont < Vez; Cont++){
		
		Resp = 0;
		
		scanf(" %d", &Ent);
		for(C=0; C < Ent; C++)
			scanf(" %s %lf", List[C].P, &List[C].Prec);
	
		scanf(" %d", &Ch);
		for(C=0; C<Ch; C++){
		
			scanf(" %s %lf", ProL.P, &ProL.Prec);
			
			for(ContP=0; ContP < Ent; ContP++)
				if(strcmp(ProL.P, List[ContP].P) == 0)
					Resp += (List[ContP].Prec * ProL.Prec);

		}
			
		printf("R$ %.2lf\n", Resp);
	
	}
		
	
	return 0;
}