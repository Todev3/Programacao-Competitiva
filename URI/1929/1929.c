#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int formula(int a, int b, int c) {
    int module;
    module = abs(b - c);
    if ( module < a && a < (b + c) )
        return 1;

    return 0;
}

int check(int a, int b, int c) {
   
    if(formula(a,b,c) && formula(b,c,a) && formula(c,a,b))
        return 1;
    
    return 0;
}

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ( check(a, b, c) || check(b, c, d) || check(c, d, a) || check(d, a, b) )
        printf("S\n");
    else
        printf("N\n");

    return 0;
}