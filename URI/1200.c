#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_TAM 80

char Format;

struct regNo	{	struct regNo *esq;
					char valor;
					struct regNo *dir;
				};
typedef struct regNo TArvore;

TArvore * AchaPai(TArvore *r, char v)
{	if(r == NULL)
	/* Arvore vazia */
		return NULL;
	else
		if(v <= r->valor)
		/* Novo noh deve ficar a esquerda de r */
			if(r->esq == NULL)
				return r;
			else
				return AchaPai(r->esq, v);
		else
		/* Novo noh deve ficar a direita de r */
			if(r->dir == NULL)
				return r;
			else
				return AchaPai(r->dir, v);
}

void ImprimePre(TArvore *r)
{	
	if(r != NULL)
	{	
		if( Format == 1)
			printf(" ");
		
		Format = 1;
		
		printf("%c", r->valor);
	
		ImprimePre(r->esq);
		ImprimePre(r->dir);	
	}
}

void ImprimePos(TArvore *r)
{	

	if(r != NULL)
	{	
	
		ImprimePos(r->esq);
		ImprimePos(r->dir);	
		if( Format == 1)
			printf(" ");
		
		Format = 1;
		printf("%c", r->valor);
	}
}

void ImprimeIn(TArvore *r)
{	

	if(r != NULL)
	{	
		
		ImprimeIn(r->esq);
		if( Format == 1)
			printf(" ");
		
		Format = 1;
		printf("%c", r->valor);
		ImprimeIn(r->dir);	
	}
}

TArvore * InsereArvore(TArvore * raiz, char Val){
	TArvore * aux, * pai;
	
	aux = (TArvore *) malloc(sizeof(TArvore));
	aux->valor = Val;
	aux->esq = NULL;
	aux->dir = NULL;
		
	pai = AchaPai(raiz, Val);
		if(pai == NULL)
			return aux;
		else
			if(Val <= pai->valor)
				pai->esq = aux;
			else
				pai->dir = aux;
}

int Buscar(TArvore * Axu, char Pesq){
	TArvore * Topo = Axu;
	
	while( Topo != NULL && Pesq != Topo->valor){
			
			if( Pesq <= Topo->valor )
				Topo = Topo->esq;
			else
				Topo = Topo->dir;
	}
	
	if( Topo == NULL)
		return -1;
	else
		return 0;
	
}

int main(){
	TArvore * raiz;
	int ContVez, Vez, Nos;
	char Esco[MAX_TAM], Val;

	raiz = NULL;
	
	while( scanf("%s", Esco) != EOF){
		
		if( strcmp(Esco, "I") == 0){
			
			scanf(" %c", &Val);
			if(raiz == NULL)
				raiz = InsereArvore(raiz, Val);
			else
				InsereArvore(raiz, Val);
		
		}
		else if( strcmp(Esco, "P") == 0 ){
			scanf(" %c", &Val);
			if( Buscar(raiz, Val) == 0)
				printf("%c existe\n", Val);
			else
				printf("%c nao existe\n", Val);
		}
		else if( strcmp(Esco, "INFIXA") == 0 ){
			Format = 0;
			ImprimeIn(raiz);
			printf("\n");
		}
		else if( strcmp(Esco, "PREFIXA") == 0 ){
			Format = 0;
			ImprimePre(raiz);
			printf("\n");
		}
		else if( strcmp(Esco, "POSFIXA") == 0 ){
			Format = 0;
			ImprimePos(raiz);
			printf("\n");
		}
		
	}
	
	return 0;
}
