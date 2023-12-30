#include <stdio.h>
#include <string.h>

int main(void) {

    char str[22];

    scanf("%s", str);

    strlen(str) >= 10 ? printf("palavrao\n") : printf("palavrinha\n");

    return 0;
}