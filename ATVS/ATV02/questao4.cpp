#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int soma=0;


    for (int i =1; i <= 100; i++) {
        printf("%d + %d = %d\n", soma, i, soma+i);
        soma += i;
    }
    printf("total: %d\n", soma);
    return 0;

}
