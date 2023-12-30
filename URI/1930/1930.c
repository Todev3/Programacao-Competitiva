#include <stdio.h>

int main(void) {

    int a, b, c, d, resp;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    resp = a + b + c + d - 3;

    printf("%d\n", resp);

    return 0;
}