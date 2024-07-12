#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    printf("\n\n1ª QUESTÃO\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("I: %d\n", i);
    }

    printf("\n\n2ª QUESTÃO\n");
    int n = 1;
    while (n <= 10)
    {
        printf("N: %d\n", n);
        n++;
    }

    printf("\n\n3ª QUESTÃO\n");
    int x = 1;
    do
    {
        printf("X: %d\n", x);
        x++;
    } while (x <= 10);

    return 0;
}
