#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int qtdImp, qtdPar, qtd = 0;
    int nInfo = 0;

    while (true)
    {
        printf("Informe um número inteiro: ");
        scanf("%d", &nInfo);

        if (nInfo == 0)
            break;

        if (nInfo % 2 == 0)
        {
            qtdPar++;
        }
        else
        {
            qtdImp++;
        }
        qtd++;
    }

    printf("Informados: %d\nQtd impar: %d\nQtd Par: %d\n", qtd, qtdImp, qtdPar);

    return 0;
}
