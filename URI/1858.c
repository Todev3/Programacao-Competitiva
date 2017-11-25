#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
#define MAX_VERTICES 200
#define MAX_ARESTAS 
#define INFINITO 1000
 
#define TRUE 1
#define FALSE 0
 
int main(void){
    int Numeros, Cont, Num, Resp, Axu;
     
    while( scanf("%d", &Num) != EOF ){
         
        Axu = INFINITO;
        Resp = 0;
         
        for(Cont = 0; Cont < Num; Cont++){
             
            scanf("%d", &Numeros);
             
            if( Axu > Numeros){
                Axu = Numeros;
                Resp = Cont;
            }
        }
         
        printf("%d\n", Resp+1);
         
    }
     
    return 0;
}