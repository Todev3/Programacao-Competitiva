#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

#define MAX_ARESTAS 50050
#define INFINITO 99999
#define MAX_ELEMENTOS 40050

typedef int TId;
typedef int TTam;

typedef struct  {	TId IdComp[MAX_ELEMENTOS + 1];
					TTam TamComp[MAX_ELEMENTOS + 1];
					
					TTam n;
} set_union;

typedef struct{int x, y, peso;}TAresta;

TAresta pesos[MAX_ARESTAS];

void set_union_init(set_union *s, TTam n){
	TTam i;
 
	for(i = 0; i < n; i++)
	{   s->IdComp[i] = i;
		s->TamComp[i] = 1;
	}
	
	s->n = n;
}
 
TId find(set_union *s, TId elem){	
	TId comp;

	for(comp = elem; comp != s->IdComp[comp]; comp = s->IdComp[comp]);
	
	return comp;
}

void union_sets(set_union *s, TId r1, TId r2){
	if(r1 == r2)
		return;
	
	if(s->TamComp[r1] >= s->TamComp[r2])
	{	s->TamComp[r1] = s->TamComp[r1] + s->TamComp[r2];
		s->IdComp[r2] = r1;
	}
	else
	{	s->TamComp[r2] = s->TamComp[r1] + s->TamComp[r2];
		s->IdComp[r1] = r2;
	}
}

int same_component(set_union *s, TId r1, TId r2){
	return (find(s, r1) == find(s, r2));
}

int kruskal(int qtVertices, int qtArestas)
{	
    set_union s;
	
	int compara(const void *p1, const void *p2)
	{	TAresta *i = (TAresta *)p1, *j = (TAresta *)p2;
	
		if(i->peso > j->peso)
			return 1;
		else
			if(i->peso == j->peso)
				return 0;
			else
				return -1;
	}
	
	qsort(pesos, qtArestas, sizeof(TAresta), compara);
	
	int Flag=0, comp1, comp2, custoTotal, i;
	
    set_union_init(&s, qtVertices);

	custoTotal = 0;
	
	for(i = 0; i < qtArestas; i++)
	{	
		comp1 = find(&s, pesos[i].x);
        comp2 = find(&s, pesos[i].y);

		if(comp1 != comp2)
		{
			custoTotal = custoTotal + pesos[i].peso;
			union_sets(&s, comp1, comp2);
			
			Flag++;
			
			if( Flag+1 == qtVertices )
				break;
		
		}
	}
	
	return custoTotal;
}
 
 int main(void){
	int iA, iB, iX, iY, iVal, Cont; 
	 
	while( scanf("%d %d", &iA, &iB) && (iA+iB != 0)){
		
		for(Cont=0; Cont < iB; Cont++){
			scanf("%d %d %d", &iX, &iY, &iVal);
			pesos[Cont].x = iX;
			pesos[Cont].y = iY;
			pesos[Cont].peso = iVal;
		}
		
		printf("%d\n", kruskal(iA, iB));
		
	}
	 
 }
 