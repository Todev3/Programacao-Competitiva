#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 105

int main() {
    
    int entradas;
    char texto[MAX_STRING];

    scanf("%d", &entradas);

    while (entradas) {

        fscanf(stdin, "%s", texto);

        entradas--;
    }

     printf("Ciencia da Computacao\n");
   
    return(0);
 }