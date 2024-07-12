#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int numeros[10];
    int maior, menor = 0;

    for (int x = 0; x < 10; x++)
    {
        printf("Informe o %dº número positivo: ", x + 1);
        scanf("%d", &numeros[x]);
    }

    int min_idx;

    for (int i = 0; i < 10; i++)
    {
        min_idx = i;

        for (int j = i + 1; j < 10; j++)
        {
            if (numeros[j] < numeros[min_idx])
                min_idx = j;
        }

        int temp = numeros[i];
        numeros[i] = numeros[min_idx];
        numeros[min_idx] = temp;
    }
    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n\n");
    return 0;
}
