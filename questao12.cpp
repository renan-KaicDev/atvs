#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
