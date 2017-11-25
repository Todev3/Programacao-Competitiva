#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 100000

typedef struct{
	char Nome[200];
	int Peso, Idade;
	double Alt;
}Rena;

int Comp(const void *A, const void *B){
	Rena * X = (Rena *)A, * Y = (Rena *)B;
	
	if(X->Peso > Y->Peso)
		return -1;
	else if(X->Peso < Y->Peso)
		return 1;
	else{
		if(X->Idade > Y->Idade)
			return 1;
		else if(X->Idade < Y->Idade)
			return -1;
		else{
			if(X->Alt > Y->Alt)
				return 1;
			else if(X->Alt < Y->Alt)
				return -1;
			else{
				return strcmp(X->Nome, X->Nome);
			}
		}
	}
}



int main(){
	int Vez, Cont, X, Y, Num;
	Rena A[Max];
	
	scanf("%d", &Vez);
	
	for(Cont = 0; Cont < Vez; Cont++){
	
		scanf("%d %d", &X, &Y);
		
		for(Num = 0; Num < X; Num++)
			scanf(" %s %d %d %lf", A[Num].Nome, &A[Num].Peso, &A[Num].Idade, &A[Num].Alt);

		qsort(A, X, sizeof(Rena), Comp);
		
		printf("CENARIO {%d}\n", Cont+1);
		for(Num = 0; Num < Y; Num++)
			printf("%d - %s\n", 1+Num, A[Num].Nome);

	}

	return 0;
}