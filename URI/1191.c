#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_TAM 70

#define TRUE 1
#define FALSE 0


struct Arvore{
	char Letra;
	struct Arvore * esq, * dir;
};

typedef struct Arvore TArvore;

TArvore * CriaArvore(char * S1, char * S2){
	int Cont, Hue;
	TArvore * Axu = NULL;
	char Ar1[MAX_TAM], Ar2[MAX_TAM];
	
	if( S2[0] != '\0'){
		
		Axu = (TArvore *) malloc( sizeof(TArvore) );
	
		Axu->Letra = S1[0];
		Axu->esq = NULL;
		Axu->dir = NULL;
	
		Cont = 0;
		
		while( S2[Cont] != '\0' && S2[Cont] != S1[0]){
			Ar1[Cont] = S2[Cont];
			Cont++;
		}
		
		Ar1[Cont] = '\0';
		
		Hue = 0;
		
		if( S2[Cont++] != '\0' )
			while( S2[Cont] != '\0' ){
				Ar2[Hue++] = S2[Cont];
				Cont++;
			}
		
		Ar2[Hue] = '\0';
		
		if( *S1 != '\0')
			Axu->esq = CriaArvore( &S1[1], Ar1);
		if( *S1 != '\0')
			Axu->dir = CriaArvore( &S1[ Cont - Hue], Ar2);

	
	}
	
	return Axu;
	
}


void ImprimePre(TArvore *r)
{	int c;

	if(r != NULL)
	{
		ImprimePre(r->esq);
		ImprimePre(r->dir);
		printf("%c", r->Letra);
	}
}

int main(){
	char S2[MAX_TAM], S1[MAX_TAM];
	TArvore * Raiz = NULL;
	
	while( scanf("%s %s", S1, S2) != EOF ){

		Raiz = CriaArvore( S1, S2);
		
		ImprimePre( Raiz );
	
		printf("\n");
		
		
	}	
		
	
	return 0;
}
