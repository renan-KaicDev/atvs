#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int soma, x=0;

    for (int i=1; i<=10; i++) {
        printf("Informe o  %dº número inteiro: ", i);
        scanf("%d", &x);

        soma += x;
    }

    printf("\n\nA media dos números informados: %d\n\n", soma/10);
    return 0;
}
