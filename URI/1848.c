#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
#define MAX_VERTICES 100 
#define MAX_ARESTAS 
#define INFINITO
 
#define TRUE 1
#define FALSE 0
 
Arruma( char * A){
     
    while( *A != '\n' && *A != 'r' && *A != '\0' )
        A++;
     
    *A = '\0';
     
}
 
int main(void){
    int Resp = 0, Cont;
    char Corvo[MAX_VERTICES];
     
    while( fgets(Corvo, MAX_VERTICES, stdin) != NULL){
         
        Arruma(Corvo);
         
        if( strcmp(Corvo, "caw caw") == 0){
            printf("%d\n", Resp);
            Resp = 0;
        }
        else{
             
            for(Cont = 0; Cont < 3; Cont++)
                if( Corvo[Cont] == '*')
                    if( Cont == 0 )
                        Resp += 4;
                    else if( Cont == 1 )
                        Resp += 2;
                    else
                        Resp += 1;
        }
         
    }
     
    return 0;
}