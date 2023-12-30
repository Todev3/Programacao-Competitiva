#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_PALAVRA 43

int main(void) {
    char palavra[TAMANHO_PALAVRA];
    int tamanho, repeticoes;
    char vogais[6] = {'a', 'e', 'i', 'o', 'u', '\0'};

    scanf("%d", &repeticoes);

    while (repeticoes) {
        scanf("%s", palavra);

        tamanho = strlen(palavra);
        int ocorrencias = 0;

        for(int contador = 0; contador < tamanho; contador++) {

             if(ocorrencias >= 3)
                break;

            if(!strchr(vogais, tolower(palavra[contador]))) {
                ocorrencias++;
                continue;
            } 

            ocorrencias = 0;
        }

        if (ocorrencias < 3) {
            printf("%s eh facil\n", palavra);
        } else {
            printf("%s nao eh facil\n", palavra);
        }

        repeticoes--;
    }

    return 0;
}