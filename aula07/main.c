#include <stdio.h>
#include "calculator.c"

int main() {

    printf("%i", sum(2, 2));
    printf("\n");
    printf("%i", sub(2, 2));
    printf("\n");
    printf("%i", mult(2, 2));
    printf("\n");
    printf("%lf", div(2, 5));

    return 0;
}