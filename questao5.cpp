#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main() {
    int x = 1;
    int soma = 0;

    while (x <= 100) {
        if (x % 2 != 0) {
            printf("%d + %d = %d\n", x, soma, x+soma);
            soma += x;
        }

        x++;
    }
    printf("Resultado: %d\n", soma);
    return 0;
}
