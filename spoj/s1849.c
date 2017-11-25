#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_TAM 100

typedef struct{
	char Nome[20];
	int pts, NumJogs, GolsM, GolsF, GolsSal;
}Times;

int Comp(const void *P1, const void *P2){
	Times *A = (Times *)P1, *B = (Times *)P2;
	return strcmp(A->Nome, B->Nome);
}

int CompB(const void *P1, const void *P2){
	Times *A = (Times *)P1, *B = (Times *)P2;
	char X[20], Y[20];
	int Cont = 0;
	
	if(A->pts > B->pts)
		return -1;
	else if(A->pts < B->pts)
		return 1;
	else{
		if(A->GolsSal > B->GolsSal)
			return -1;
		else if(A->GolsSal < B->GolsSal)
			return 1;
		else{
			if(A->GolsM > B->GolsM)
				return -1;
			else if(A->GolsM < B->GolsM)
				return 1;
			else{
				
				while(A->Nome[Cont] != '\0'){
					X[Cont] = toupper(A->Nome[Cont]);
					Cont++;
				}
				X[Cont] = '\0';
				
				Cont = 0;
				
				while(B->Nome[Cont] != '\0'){
					Y[Cont] = toupper(B->Nome[Cont]);
					Cont++;
				}
				Y[Cont] = '\0';
				
				return strcmp(X, Y);
			}
		}
	}
}
int main(void){
	Times MTim[MAX_TAM], Tim1, Tim2, * A, * B;
	int NumTim, NumJog, ContTim, ContJog, Sai;
	double Perc;
	
	while(1){
		scanf("%d %d", &NumTim, &NumJog);

		if(NumJog+NumTim == 0)
			break;
		
		for(ContTim=0; ContTim < NumTim; ContTim++){
			scanf("%s", MTim[ContTim].Nome);
			MTim[ContTim].pts = 0;
			MTim[ContTim].GolsM = 0;
			MTim[ContTim].GolsF = 0;
			MTim[ContTim].GolsSal = 0;
			MTim[ContTim].NumJogs = 0;
		}
		
		qsort(MTim, NumTim, sizeof(Times), Comp);
		
		for(ContJog=0; ContJog < NumJog; ContJog++){
			scanf("%s %d - %d %s", Tim1.Nome, &Tim1.GolsM, &Tim2.GolsM, Tim2.Nome);
			
			A = (Times*) bsearch(Tim1.Nome, MTim, NumTim, sizeof(Times), Comp);
			B = (Times*) bsearch(Tim2.Nome, MTim, NumTim, sizeof(Times), Comp);
			
			if(Tim1.GolsM > Tim2.GolsM){
				A->pts += 3;
				A->NumJogs++;
				A->GolsM += Tim1.GolsM;
				A->GolsF += Tim2.GolsM;
				A->GolsSal += Tim1.GolsM - Tim2.GolsM;
				
				B->NumJogs++;
				B->GolsM += Tim2.GolsM;
				B->GolsF += Tim1.GolsM;
				B->GolsSal += Tim2.GolsM - Tim1.GolsM;				
			}
			else if(Tim1.GolsM < Tim2.GolsM){
				A->NumJogs++;
				A->GolsM += Tim1.GolsM;
				A->GolsF += Tim2.GolsM;
				A->GolsSal += Tim1.GolsM - Tim2.GolsM;
				
				B->pts += 3;
				B->NumJogs++;
				B->GolsM += Tim2.GolsM;
				B->GolsF += Tim1.GolsM;
				B->GolsSal += Tim2.GolsM - Tim1.GolsM;	
			}
			else{
				A->pts++;
				A->NumJogs++;
				A->GolsM += Tim1.GolsM;
				A->GolsF += Tim2.GolsM;
				A->GolsSal += Tim1.GolsM - Tim2.GolsM;
				
				B->pts++;
				B->NumJogs++;
				B->GolsM += Tim2.GolsM;
				B->GolsF += Tim1.GolsM;
				B->GolsSal += Tim2.GolsM - Tim1.GolsM;
			}
			
		}
		
		qsort(MTim, NumTim, sizeof(Times), CompB);
		
		Sai = 0;
		ContTim = 0;
		
		if(ContTim == 0){
				Sai++;
				printf("%2d.", Sai);
			}
		
		for(ContTim=0; ContTim < NumTim; ContTim++){
			
			if(ContTim !=0){
				if(ContTim != NumTim-1 && MTim[ContTim].pts == MTim[ContTim-1].pts && MTim[ContTim].GolsSal == MTim[ContTim-1].GolsSal && MTim[ContTim].GolsM == MTim[ContTim-1].GolsM){
					Sai++;
					printf("   ");
				}
				else if(ContTim == NumTim-1 && MTim[ContTim].pts == MTim[ContTim-1].pts && MTim[ContTim].GolsSal == MTim[ContTim-1].GolsSal && MTim[ContTim].GolsM == MTim[ContTim-1].GolsM){
					Sai++;
					printf("   ");
				}
				else{
					Sai++;
					printf("%2d.", Sai);
				}
			}
			
			if(MTim[ContTim].NumJogs == 0)
				printf(" %15s %3d %3d %3d %3d %3d %6s\n", MTim[ContTim].Nome, MTim[ContTim].pts, MTim[ContTim].NumJogs, MTim[ContTim].GolsM, MTim[ContTim].GolsF, MTim[ContTim].GolsSal, "N/A");
			else{
				Perc = (MTim[ContTim].pts * 100 ) / (MTim[ContTim].NumJogs *  3.0);
			printf(" %15s %3d %3d %3d %3d %3d %6.2lf\n", MTim[ContTim].Nome, MTim[ContTim].pts, MTim[ContTim].NumJogs, MTim[ContTim].GolsM, MTim[ContTim].GolsF, MTim[ContTim].GolsSal, Perc);

			}
		}
		
		printf("\n");
		
	}
	
	return 0;
}