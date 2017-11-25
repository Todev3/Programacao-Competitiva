#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct Fila{
	int Num;
	struct Fila * X;
};

typedef struct Fila Fi;

Fi * CriCirc(int A){
		
	int C;
	Fi * Ant = NULL, * Axu = NULL, * R = NULL;
	
	for(C=1; C <= A; C++){
		
		Axu = (Fi *) malloc(sizeof(Fi));
		
		Axu->Num = C;
		
		if(Ant == NULL){
			Ant = Axu;
			R = Ant;
		}
		else{
			 Ant->X = Axu;
			Ant = Axu;
		}
	}
	
	Ant->X = R;
	
	return Ant;
	
}

int MataSold(Fi * A, int S, int Vezes){
	
	int Cont=0, Aux, Soma=0;
	Fi * Y = A;
	
	A = A->X;
	
	while(Cont != Vezes-1){
		Soma++;
		if(Soma == S){
			Cont++;
			Soma = 0;

			Y->X = A->X;
			free(A);

			A = Y->X;
		}
		else{
			Y = A;
			A = A->X;
		}
		
	};
	
	Aux = A->Num;
	free(A);
	
	return Aux;
	
}

int main(void){
	
	int Sold, Mat, C, V;
	Fi * Atu;
	
	scanf("%d", &V);
	
	for(C=0; C < V; C++){
		
		scanf("%d %d", &Sold, &Mat);
		if(Sold == 0 && Mat == 0)
			break;
	
		Atu = CriCirc(Sold);

		printf("Case %d: %d\n", C+1, MataSold(Atu, Mat, Sold));
		
	}
	
	return 0;
}