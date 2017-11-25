#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	
	char sTime[30];
	int iPts, iJog, iGol, Ord;
	
}stTimes;

int Comp(const void *P1, const void *P2){
	stTimes *A = (stTimes* )P1, *B = (stTimes* )P2;
	
	return strcmp(A->sTime, B->sTime);
	
}

int CompB(const void *P1, const void *P2){
	stTimes *A = (stTimes* )P1, *B = (stTimes* )P2;
	
	if(A->iPts > B->iPts)
		return -1;
	else if(A->iPts < B->iPts)
		return 1;
	else{
		if(A->iJog > B->iJog)
			return -1;
		else if(A->iJog < B->iJog)
			return 1;
		else{
			if(A->iGol > B->iGol)
				return -1;
			else if(A->iGol < B->iGol)
				return 1;
			else{
				if(A->Ord > B->Ord)
					return 1;
				else if(A->Ord < B->Ord)
					return -1;
			}
		}
		
	}
}

int main(void){
	int iVezes, iCont, tCont, NumTim, NumJogos;
	stTimes Time[120], T1, T2, *X, *Y;
	
	scanf("%d", &iVezes);
	
	for(iCont=0; iCont < iVezes; iCont++){
		
		scanf("%d %d", &NumTim, &NumJogos);
		
		for(tCont=0; tCont < NumTim; tCont++){
			scanf("%s", Time[tCont].sTime);
			Time[tCont].iPts = 0;
			Time[tCont].iJog = 0;
			Time[tCont].iGol = 0;
			Time[tCont].Ord = tCont;
		}
		
		qsort(Time, NumTim, sizeof(stTimes), Comp);
		
		for(tCont=0; tCont < NumJogos; tCont++){
			scanf("%d %s %d %s", &T1.iPts, T1.sTime, &T2.iPts, T2.sTime);
			
			if(T1.iPts > T2.iPts){
				X = (stTimes *) bsearch(&T1.sTime, Time, NumTim, sizeof(stTimes), Comp);
				Y = (stTimes *) bsearch(&T2.sTime, Time, NumTim, sizeof(stTimes), Comp);
				if(X != NULL){
					X->iPts += 3;
					X->iJog++;
					X->iGol += T1.iPts;
					Y->iGol += T2.iPts;
				}
			}
			else if(T1.iPts < T2.iPts){
				X = (stTimes *) bsearch(&T2.sTime, Time, NumTim, sizeof(stTimes), Comp);
				Y = (stTimes *) bsearch(&T1.sTime, Time, NumTim, sizeof(stTimes), Comp);
				if(X != NULL){
					X->iPts += 3;
					X->iJog++;
					X->iGol += T2.iPts;
					Y->iGol += T1.iPts;
				}
			}
			else{
				
				X = (stTimes *) bsearch(&T1.sTime, Time, NumTim, sizeof(stTimes), Comp);
				Y = (stTimes *) bsearch(&T2.sTime, Time, NumTim, sizeof(stTimes), Comp);
				
				if(X != NULL && Y != NULL){
					X->iPts++;
					Y->iPts++;
					X->iGol += T1.iPts;
					Y->iGol += T2.iPts;
				}
				
			}
		
		}
		
		qsort(Time, NumTim, sizeof(stTimes), CompB);
		
		for(tCont=0; tCont < NumTim; tCont++)
			printf("%s\n", Time[tCont].sTime);
			
		
	}	
	
	return 0;
}