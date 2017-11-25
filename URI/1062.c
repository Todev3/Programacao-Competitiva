#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 1005

#define TRUE 1
#define FALSE 0

struct Pilha{
	int Vag;
	struct Pilha * prox;
};

typedef struct Pilha TPilha;

typedef struct{
	TPilha * Topo;
}TDescri;

void Empilha(TDescri * A, int Num){
	TPilha * Ant, * Aux;
	
	Aux = (TPilha *)malloc( sizeof(TPilha) );
	
	Aux->Vag = Num;
	Aux->prox = NULL;
	
	if(A->Topo == NULL)
		A->Topo = Aux;
	else{
		Ant = A->Topo;
		Aux->prox = Ant;
		A->Topo = Aux;
	}
	
}

void Desempilha(TDescri * A){
	TPilha * Ant, * Aux;
	
	if(A->Topo !=  NULL){
		Aux = A->Topo;
		Ant = Aux->prox;
		A->Topo = Ant;
		free(Aux);
	}
}

void Destroi(TDescri * A){
	TPilha * Ant, * Aux;
	
	Aux = A->Topo;
	
	while(Aux != NULL){
		Ant = Aux;
		Aux = Aux->prox;
		free(Ant);
	}
	
}

int main(void){
	TDescri Descri;
	int Cont, NumVag, Vago, vVagos[MAX_TAM];
	
	while( scanf("%d", &NumVag) && NumVag != 0){
		
		while( scanf("%d", &vVagos[0]) && vVagos[0] != 0 ){
			
			Descri.Topo = NULL;
			
			for(Cont=1; Cont < NumVag; Cont++){
				scanf( "%d", &vVagos[Cont] );
			}
			
			Cont = 0;
			Vago = 1;
			
			while(Cont < NumVag){
			
				if(Descri.Topo == NULL || Descri.Topo->Vag != vVagos[Cont] ){
					
					if(Vago <= NumVag){
						Empilha(&Descri, Vago );
						Vago++;
					}
					else{
						break;
					}
					
				}
				else{
					Cont++;
					Desempilha(&Descri);
				}
			
			}
			
			if(Descri.Topo == NULL)
				printf("Yes\n");
			else{
				printf("No\n");
				Destroi(&Descri);
			}
			
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}