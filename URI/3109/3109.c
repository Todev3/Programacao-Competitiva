#include <stdio.h>
#include <stdlib.h>
#define TOTAL_MESAS 1002

int main (void){
    int qtdMesas, vezes, operacao, busca, trocaA, trocaB;
    int mesas[TOTAL_MESAS];

    scanf("%d", &qtdMesas);
    scanf("%d", &vezes);

    for(int i = 1; i <= qtdMesas; i++)
        mesas[i] = i;

    while(vezes) {

        scanf("%d", &operacao);

        if(operacao == 1) {
            scanf("%d %d", &trocaA, &trocaB);   

            for(int i = 1; i <= qtdMesas; i++) {
                if(mesas[i] == trocaA) {
                    mesas[i] = trocaB;
                    continue;
                }
                
                if(mesas[i] == trocaB) {
                    mesas[i] = trocaA;
                    continue;
                }
            }

        }
            
        if(operacao == 2) {
            scanf("%d", &busca);
            int redirect = 0;
            int aux = busca;

            while ( !(mesas[aux] == busca) ) {
                aux = mesas[aux];
                redirect++;
            }
            printf("%d\n", redirect);
        }
        
        vezes--;
    }

    return 0;
}