#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int soma, x, cont = 0;

    do
    {
        printf("Informe um número [-1 p/ sair]: ");
        scanf("%d", &x);

        if (x >= 0)
        {
            soma += x;
            cont++;
        }
    } while (x >= 0);

    printf("A soma dos %d números informados:  %d\n\n", cont, soma);
    return 0;
}
