#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

#define MAX 50005

typedef struct{
	int Ori, Prox;
	char Ca;
}TLet;

TLet PosiC[MAX], PosiV[MAX];

void Mov(char * Str, int Des1, int Max1, int Des2, int Max2 ){
	int Cont;
	
	if( Des1 != 0 ){
		for( Cont = 0; Cont < Max1; Cont++ ){
			if( Cont + Des1 < Max1 )
				PosiV[Cont].Prox = PosiV[Cont + Des1].Ori;
			else{
				PosiV[Cont].Prox = PosiV[ (Cont + Des1) % Max1 ].Ori;
			}
		}
		
		for( Cont = 0; Cont < Max1; Cont++ ){
			Str[ PosiV[Cont].Prox ] = PosiV[Cont].Ca;
			PosiV[Cont].Ori = PosiV[Cont].Prox;
		}	
	}
	if( Des2 != 0 ){
		for( Cont = 0; Cont < Max2; Cont++ ){
			if( Cont + Des2 < Max2 )
				PosiC[Cont].Prox = PosiC[Cont + Des2].Ori;
			else{
				PosiC[Cont].Prox = PosiC[ (Cont + Des2) % Max2 ].Ori;
			}
		}
		
		for( Cont = 0; Cont < Max2; Cont++ ){
			Str[ PosiC[Cont].Prox ] = PosiC[Cont].Ca;
			PosiC[Cont].Ori = PosiC[Cont].Prox;
		}
		
	}
	
}


int main(void){
	char S[MAX];
	int Cont, Vezes, Cont2, Receb, Ent, Des, QtdC, QtdV, C, V;
	
	scanf("%d", &Vezes);
	
	for(Cont = 0; Cont < Vezes; Cont++){
		
		scanf("%s %d", S, &Receb);
		
		QtdC = QtdV = 0;
		
		Cont2 = 0;
		while( S[Cont2] != '\0' ){
			if( S[Cont2] == 'a' || S[Cont2] == 'e' || S[Cont2] == 'i' || S[Cont2] == 'o' || S[Cont2] == 'u' ){
				PosiV[ QtdV ].Ori = Cont2;
				PosiV[ QtdV++ ].Ca = S[Cont2];
			}
			else{
				PosiC[ QtdC ].Ori = Cont2;
				PosiC[ QtdC++ ].Ca = S[Cont2];
				
			}
			Cont2++;
		} 
		
		printf("Caso #%d:\n", Cont+1);
		
		C = V = 0;
		
		for( Cont2 = 0; Cont2 < Receb; Cont2++ ){
			
			scanf("%d", &Ent);
			
			if( Ent == 0){
				scanf("%d", &Des);
				V += Des;
			}
			else if( Ent == 1 ){
				scanf("%d", &Des);
				C += Des;
			}
			else{
				Mov( S, V, QtdV, C, QtdC);
				C = V = 0;
				printf("%s\n", S);
			}
		}
	}
	
	return 0;
}