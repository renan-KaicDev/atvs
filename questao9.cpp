#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int x, y = 0;

    printf("Informe a operação[Formato: x^y]: ");
    scanf("%d^%d", &x, &y);

    int resultado = 1;
    for (int i = 0; i < x; i++)
    {
        resultado *= y;
    }

    printf("\n%d elevado a %d é igual a %d\n\n", x, y, resultado);
    return 0;
}
