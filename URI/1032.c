#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct Lista{
	int N;
	struct Lista * Pro;
};

typedef struct Lista L;

L * Encade(int A){
	int Cont;
	L * Aux=NULL, * Ini=NULL, * Pont=NULL;
	
	for(Cont=1; Cont <= A; Cont++){
		
		Aux = (L *) malloc(sizeof(L));
		
		Aux->N = Cont;
		
		if(Pont == NULL){
			Pont = Aux;
			Ini = Aux;
		}
		else{
			Pont->Pro = Aux;
			Pont = Aux;
		}
		
	}	
	
	Pont->Pro = Ini;
	
	return Pont;
	
}

int Mata(L * Mov, int Fim, int * Pri){
	
	int Cont=0, C, frag=0, Comp;
	L * A=Mov->Pro, * B=Mov;
	
	
	while(Fim != 1){
		
		Comp = (Pri[frag]-1) % Fim;
		
		for(C=0; C < Comp; C++){
			B = A;
			A = A->Pro;
		}
		
		B->Pro = A->Pro;
		free(A);
		A = B->Pro;
		
		Fim--;
		frag++;
		
	}
	
	Cont = A->N;
	
	free(A);
	
	return Cont;
}

void GeraPri(int * A){	
	int Pri=1, frag=0, Comp, C;
	
	while(frag != 3510){
			
		Pri++;
			
		Comp = (int)sqrt(Pri);
			
		for(C=2; C <= Comp ; C++){				
			if(Pri % C == 0)
				break;
		}
		
		if(C == Comp+1){
			A[frag] = Pri;
			frag++;
		}
	
	}
	
	
}

int main(void){
	
	int Num, Vetor[4000];
	L * Atu;
	
	GeraPri(Vetor);
	
	while(1){
		
		scanf("%d", &Num);
		
		if(Num == 0)
			break;
		
		Atu = Encade(Num);
		
		printf("%d\n", Mata(Atu, Num, Vetor));
			
	}

	return 0;
}