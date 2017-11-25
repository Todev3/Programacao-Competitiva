#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	char sNome[200], sCamisa[12];
	int cTam;
}stCamisas;

void Limpa(){
	while(getchar() != '\n');
}

void Arru(char * A){
	int Cont=0;
	
	while(A[Cont] != '\n' && A[Cont] != '\r' && A[Cont] != '\0')
		Cont++;
	
	A[Cont] = '\0';	
}

int Comp(const void *P1, const void *P2){
	stCamisas *A = (stCamisas *)P1, *B = (stCamisas *)P2;
	
	if(A->sCamisa[0] > B->sCamisa[0])
		return 1;
	else if(A->sCamisa[0] < B->sCamisa[0])
		return -1;
	else{	
		if(A->cTam > B->cTam)
			return 1;
		else if(A->cTam < B->cTam)
			return -1;
		else
			return strcmp(A->sNome, B->sNome);	
	}
}

int main(void){
	int NumVez=0, ContVez, Flag=0;
	stCamisas stAluno[70];
	char aux;
	
	while(1){			
		
		scanf("%d", &NumVez);
		
		if(NumVez == 0)
			break;
		
		if(Flag != 0)
			printf("\n");
		
		Flag++;
		
		Limpa();
		
		for(ContVez=0; ContVez < NumVez; ContVez++){
			
			fgets(stAluno[ContVez].sNome, 200, stdin);
			
			Arru(stAluno[ContVez].sNome);
			
			scanf("%s %c", stAluno[ContVez].sCamisa, &aux);
			
			if(aux == 'P')
				stAluno[ContVez].cTam = 0;
			else if(aux == 'M')
				stAluno[ContVez].cTam = 1;
			else
				stAluno[ContVez].cTam = 3;
			
			Limpa();
			
		}
		
		qsort(stAluno, NumVez, sizeof(stCamisas), Comp);
		
		for(ContVez=0; ContVez < NumVez; ContVez++){
			if(stAluno[ContVez].cTam == 0)
				aux = 'P';
			else if(stAluno[ContVez].cTam == 1)
				aux = 'M';
			else
				aux = 'G';
			
			printf("%s %c %s\n", stAluno[ContVez].sCamisa, aux, stAluno[ContVez].sNome);
		}
		
	}
	
	return 0;
}