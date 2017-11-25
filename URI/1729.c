#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

#define MAX 12


int main(void){
	char Num[MAX], Flag;
	long long int SegTot;
	int Divs, NumTime, Cont, Min, Seg, Resp;
	double DistMax;
	
	scanf("%d %lf", &Divs, &DistMax);
	
	while( scanf("%d", &NumTime) != EOF ){
		
		SegTot = 0;
		
		Flag = FALSE;
		
		for(Cont = 0; Cont < Divs; Cont++){
			
			scanf(" %s", Num);
			
			if( strcmp(Num, "-:--:--") == 0 )
				Flag = TRUE;
			else{

				SegTot += 60 * 60 * (Num[0] - '0');
				SegTot += 60 * ( (Num[2] - '0') * 10 + (Num[3] - '0') );
				SegTot += ( (Num[5] - '0') * 10 + (Num[6] - '0') );
			}
			
		}
		
		if( Flag == TRUE )
			printf("%3d: -\n", NumTime);
		else{
			Resp = round(SegTot / DistMax);
			Min = Resp / 60;
			Seg = Resp % 60;	
			
			printf("%3d:%2d:%02d min/km\n", NumTime, Min, Seg, Resp);
		}
		
	}
	
	
	return 0;
}