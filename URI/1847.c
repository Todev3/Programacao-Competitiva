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
    int Pri, Seg, Terc;
     
    while( scanf("%d %d %d", &Pri, &Seg, &Terc) != EOF){
     
    if( Pri > Seg && Seg <= Terc )
        printf(":)");
    else if( Pri < Seg && Seg >= Terc )
        printf(":(");
    else if( Pri < Seg && Seg < Terc && (Seg - Pri) > (Terc - Seg) )
        printf(":(");
    else if( Pri < Seg && Seg < Terc && (Seg - Pri) <= (Terc - Seg) )
        printf(":)");
    else if( Pri > Seg && Seg > Terc && (Pri - Seg) > (Seg - Terc) )
        printf(":)");
    else if( Pri > Seg && Seg > Terc && (Pri - Seg) <= (Seg - Terc) )
        printf(":(");
    else if( Pri == Seg && Seg < Terc )
        printf(":)");
    else if( Pri == Seg && Seg >= Terc )
        printf(":(");
     
    printf("\n");
     
}
    return 0;
}