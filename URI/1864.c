#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
#define MAX_VERTICES 
#define MAX_ARESTAS 
#define INFINITO
 
#define TRUE 1
#define FALSE 0
 
int main(void){
    char Frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int Cont, Ent;
     
    while( scanf("%d", &Ent) != EOF ){
         
        for(Cont = 0; Cont < Ent; Cont++)
            printf("%c", Frase[Cont]);
         
        printf("\n");
         
    }
     
    return 0;
}