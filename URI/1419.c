#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int Vez, Cont, Num, L[20], M[20], Sl=0, Sm=0, Cl=0, Cm=0, A1, A2;
	
	while(1){
	
		scanf("%d", &Vez);
		if(Vez == 0)
			break;
			
		for(Cont=0; Cont < Vez; Cont++){
			scanf("%d", &L[Cont]);
			Sl += L[Cont];
		}
		for(Cont=0; Cont < Vez; Cont++){
			scanf("%d", &M[Cont]);
			Sm += M[Cont];
		}
		
		Num = L[0];
		for(Cont=0; Cont < Vez; Cont++){
		
			if(L[Cont] == Num)
				Cl++;
			else{
				Num = L[Cont];
				Cl = 0;
				Cl++;
			}
			if(Cl == 3){
				A1 = Cont;
				break;
			}
			
		}
		
		
		Num = M[0];
		for(Cont=0; Cont < Vez; Cont++){
		
			if(M[Cont] == Num)
				Cm++;
			else{
				Num = M[Cont];
				Cm = 0;
				Cm++;
			}
			if(Cm == 3){
				A2 = Cont;
				break;
			}
			
		}
		
		
		if(Cm == 3 && Cl == 3){
			if(A1 < A2)
				Sl += 30;
			else if(A1 > A2)
				Sm += 30;		
		}
		else if(Cm == 3)
			Sm += 30;
		else if(Cl == 3)
			Sl += 30;
			
			
		if(Sm < Sl)
			printf("M\n");
		else if(Sm > Sl)
			printf("L\n");
		else
			printf("T\n");
		
		Sl = Sm = Cl = Cm = 0;
	
	}
	
	return 0;
}