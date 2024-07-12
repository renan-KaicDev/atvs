#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int n, fatorial = 1;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }

    printf("\nO fatorial de %d é igual a %d\n\n", n, fatorial);
}
