#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
  
#define TRUE 1
#define FALSE 0
  
#define MAX_ARESTAS 200050
#define INFINITO 99999
#define MAX_ELEMENTOS 200050
  
typedef int TId;
typedef int TTam;
  
typedef struct  {   TId IdComp[MAX_ELEMENTOS + 1];
                    TTam TamComp[MAX_ELEMENTOS + 1];
                      
                    TTam n;
} set_union;
  
typedef struct{int x, y, peso;}TAresta;
  
TAresta pesos[MAX_ARESTAS];
  
void set_union_init(set_union *s, TTam n){
    TTam i;
   
    for(i = 1; i <= n; i++)
    {   s->IdComp[i] = i;
        s->TamComp[i] = 1;
    }
      
    s->n = n+1;
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
    {   s->TamComp[r1] = s->TamComp[r1] + s->TamComp[r2];
        s->IdComp[r2] = r1;
    }
    else
    {   s->TamComp[r2] = s->TamComp[r1] + s->TamComp[r2];
        s->IdComp[r1] = r2;
    }
}
  
int same_component(set_union *s, TId r1, TId r2){
    return (find(s, r1) == find(s, r2));
}
  
 void Troca(int n, int i){
    int j=i, f;
    TAresta Axu;
     
    while( 2*j <= n){
         
        f = j*2;
         
        if( f < n && pesos[f].peso > pesos[f + 1].peso )
            f = f + 1;
        if( pesos[j].peso <= pesos[f].peso )
            j = n;
        else{
            Axu = pesos[j];
            pesos[j] = pesos[f];
            pesos[f] = Axu;
            j = f;
        }
    }
}
 
TAresta Me(int n){
    int j=1, f;
    TAresta Axu;
     
    while( 2*j <= n){
         
        f = j*2;
         
        if( f < n && pesos[f].peso > pesos[f + 1].peso )
            f = f + 1;
        if( pesos[j].peso <= pesos[f].peso )
            j = n;
        else{
            Axu = pesos[j];
            pesos[j] = pesos[f];
            pesos[f] = Axu;
            j = f;
        }
             
    }
     
    Axu = pesos[1];
    pesos[1] = pesos[n];
     
    return Axu;
     
}
 
void Constroi(int Max){
    int Atu;
     
    for(Atu= Max/2; Atu >= 1; Atu--){
        Troca(Max, Atu);
    }
     
}
  
int kruskal(int qtVertices, int qtArestas)
{   
    set_union s;
      
    Constroi(qtArestas);
      
    int Flag=0, comp1, comp2, custoTotal, i, Axu=qtArestas;
    TAresta Hue;
      
    set_union_init(&s, qtVertices);
  
    custoTotal = 0;
      
    for(i = 1; i <= qtArestas; i++)
    {   
        Hue = Me(Axu--);
        comp1 = find(&s, Hue.x);
        comp2 = find(&s, Hue.y);
         
        if(comp1 != comp2)
        {
             
            custoTotal = custoTotal + Hue.peso;
            union_sets(&s, comp1, comp2);
              
            Flag++;
            if( Flag+1 == qtVertices )
                break;
          
        }
    }
      
    return custoTotal;
}
   
 int main(void){
    int iA, iB, iX, iY, iVal, Cont, Total; 
       
    while( scanf("%d %d", &iA, &iB) && (iA+iB != 0)){
          
		Total = 0;
		  
        for(Cont=1; Cont <= iB; Cont++){
            scanf("%d %d %d", &iX, &iY, &iVal);
            pesos[Cont].x = iX+1;
            pesos[Cont].y = iY+1;
            pesos[Cont].peso = iVal;
			Total += iVal;
        }
          
        printf("%d\n", Total - kruskal(iA, iB));
          
    }
       
 }