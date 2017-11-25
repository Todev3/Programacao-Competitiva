#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct stDiamante{
	struct stDiamante * Prox;
};

typedef struct stDiamante stDia;

void In(stDia * A){
	stDia * aux, * Pos;
	
	aux = (stDia *)malloc(sizeof(stDia));
	
	if(A->Prox == NULL){
		A->Prox = aux;
		aux->Prox = NULL;
	}
	else{
		Pos = A->Prox;
		A->Prox = aux;
		aux->Prox = Pos;
	}
}

void Exclui(stDia * A, int * Soma){
	stDia * aux, * Pos;
	
	if(A->Prox == NULL)
		*Soma += 0;
	else{
		Pos = A->Prox;
		
		if(Pos->Prox == NULL){
			A->Prox = NULL;
			*Soma += 1;
		}
		else{
			aux = Pos->Prox;
			A->Prox = aux;		
			*Soma +=1;
		}
		
		free(Pos);
		
	}
	
}

int main(void){
	int NumVez, ContVez, ContEnt, Resp;
	char Ent[1020];
	stDia Aux;
	
	scanf("%d", &NumVez);
	
	for(ContVez=0; ContVez < NumVez; ContVez++){
		
		scanf("%s", Ent);
		
		ContEnt = Resp = 0;
		Aux.Prox = NULL;
		
		while(Ent[ContEnt] != '\0'){
			
			if(Ent[ContEnt] == '<'){
				In(&Aux);
			}
			else if(Ent[ContEnt] == '>')
				Exclui(&Aux, &Resp);
			
			ContEnt++;
			
		}
		
		printf("%d\n", Resp);
		
	}
	
	
	return 0;
}