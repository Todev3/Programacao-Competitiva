#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 105
#define MAX_CHOICE 10

int main(){
    char name1[MAX_NAME], name2[MAX_NAME];
    char choice1[MAX_CHOICE], choice2[MAX_CHOICE];
    int result, vezes, num1, num2;

    scanf("%d", &vezes);

    while (vezes) {
        scanf("%s %s %s %s", name1, choice1, name2, choice2);
        scanf("%d %d", &num1, &num2);

        result = (num1 + num2) % 2;

        if ( ( result == 0 && !strcmp(choice1, "PAR") ) 
                || ( result == 1 && !strcmp(choice1, "IMPAR") )) {
            printf("%s\n", name1);
        } else {
            printf("%s\n", name2);
        }


        vezes--;
    }


    return 0;
 }