#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int Num, Pts;
	double CmT, CrT, CA;
}Ba;

int Comp(const void *P1, const void *P2){
	Ba *A = (Ba *)P1, *B = (Ba *)P2;
	
	if(A -> Pts > B -> Pts)
		return -1;
	else if(A -> Pts < B -> Pts)
		return 1;
	else if(A -> CmT / A -> CrT > B -> CmT / B -> CrT)
		return -1;
	else if(A -> CmT / A -> CrT < B -> CmT / B -> CrT)
		return 1;
	else if(A -> CmT > B -> CmT)
		return -1;
	else if(A -> CmT < B -> CmT)
		return 1;
	else if(A -> Num > B -> Num)
		return -1;
	else
		return 1;
}

int main(void){
	int Ent, Axu, Cont, A, Aa, B, Bb, I=0;
	Ba Tim[101];
	
	while(1){
		
		for(Cont=0; Cont < 100; Cont++){
			Tim[Cont].Pts = 0;
			Tim[Cont].CmT = Tim[Cont].CrT = 0;
		}
		
		scanf("%d", &Ent);
		if(Ent == 0)
			break;
		
		Axu = Ent * (Ent - 1)/ 2;
		
		for(Cont = 0; Cont < Axu; Cont++){
		
			scanf("%d %d %d %d", &A, &Aa, &B, &Bb);
			
			if(Aa > Bb){
				Tim[A - 1].Pts += 2;
				Tim[B - 1].Pts += 1;
			}
			else{
				Tim[A - 1].Pts += 1;
				Tim[B - 1].Pts += 2;
			}
			Tim[A - 1].Num = A;
			Tim[B - 1].Num = B;
			Tim[A - 1].CmT += Aa;
			Tim[A - 1].CrT += Bb;
			Tim[B - 1].CmT += Bb;
			Tim[B - 1].CrT += Aa;
		}
			
		qsort(Tim, Ent, sizeof(Ba), Comp);
		
		if(I != 0)
			printf("\n");
		
		I++;
		
		printf("Instancia %d\n", I);
		
		for(Cont=0; Cont < Ent; Cont++){
			if(Cont != 0)
				printf(" ");
			printf("%d", Tim[Cont].Num);
		}

		printf("\n");
		
	}



	return 0;
}