#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_TAM 600

struct regNo	{	struct regNo *esq;
					int valor;
					struct regNo *dir;
				};
typedef struct regNo TArvore;

TArvore * AchaPai(TArvore *r, int v)
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

TArvore * InsereArvore(TArvore * raiz, int Val){
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

void ArvFila(TArvore * Axu){
	int Fila[MAX_TAM], Ini = 0, Fim = 0;
	TArvore * Topo = Axu;
	
	Fila[ Fim++ ] = Axu->valor;
	
	while(Ini != Fim){
		
		while( Topo != NULL && Fila[Ini] != Topo->valor){
			
			if( Fila[Ini] <= Topo->valor)
				Topo = Topo->esq;
			else
				Topo = Topo->dir;
			
		}
		
		if(Topo != NULL){
			if(Topo->esq != NULL)
				Fila[ Fim++ ] = Topo->esq->valor;
			if(Topo->dir != NULL)
				Fila[ Fim++ ] = Topo->dir->valor;
		}
		
		if(Ini != 0)
			printf(" ");
		
		printf("%d", Fila[Ini++]);
		
		Topo = Axu;
		
	}
	
}

void Destroi(TArvore * Axu, TArvore * Ant){
	
	if(Axu != NULL){
		
		if(Axu->esq == NULL && Axu->dir == NULL){
		
			if( Ant != NULL && Axu->valor <= Ant->valor)
				Ant->esq = NULL;
			else if( Ant != NULL && Axu->valor > Ant->valor)
				Ant->dir = NULL;

			free(Axu);
		}
		else{
			Destroi(Axu->esq, Axu);
			Destroi(Axu->dir, Axu);
			Destroi(Axu, Ant);
		}
		
	}
}

int main(){
	TArvore * raiz;
	int ContVez, Vez, Nos, ContNos, Val;
	
	scanf("%d", &Vez);
	
	for(ContVez=0; ContVez < Vez; ContVez++){
		
		scanf("%d", &Nos);

		raiz = NULL;
		
		for(ContNos=0; ContNos < Nos; ContNos++){
			
			scanf("%d", &Val);
			if(raiz == NULL)
				raiz = InsereArvore(raiz, Val);
			else
				InsereArvore(raiz, Val);
		}
		
		printf("Case %d:\n", ContVez+1);
		
		ArvFila( raiz );
			
		printf("\n\n");
		
		Destroi(raiz, NULL);
		
	}
	
	return 0;
}
