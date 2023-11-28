#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define MAX_INPUT 17
#define POSITION_SIZE 3

void move(char * input, char * horse, char x, char y) {
    char aux[POSITION_SIZE];
    aux[2] = '\0';

    aux[0] = horse[0] + x;
    aux[1] = horse[1] + y;

    strcpy(input, aux);
}

int main() {
	
    char inputs[MAX_INPUT][POSITION_SIZE], horseMoves[8][POSITION_SIZE], horse[POSITION_SIZE];
    char aux[POSITION_SIZE], temp[POSITION_SIZE];
    int cont, movimento;

    temp[2] = '\0';

    while (TRUE) {
        movimento = 0;

        scanf("%s", horse);

        if (horse[0] == '0') {
            break;
        }

        move(horseMoves[0], horse, -2, 1);
        move(horseMoves[1], horse, -2, -1);

        move(horseMoves[2], horse, 2, 1);
        move(horseMoves[3], horse, 2, -1);

        move(horseMoves[4], horse, 1, -2);
        move(horseMoves[5], horse, -1, -2);

        move(horseMoves[6], horse, 1, 2);
        move(horseMoves[7], horse, -1, 2);
        
        for (cont = 0; cont < 8; cont++) {
            scanf("%s", aux);

            move(inputs[movimento++], aux, -1, -1);
            move(inputs[movimento++], aux, -1, +1);
        }

        for (cont = 0; cont < movimento; cont++) {
            printf("%s - %d\n", inputs[cont], cont);
        }

    }

    return 0;
}