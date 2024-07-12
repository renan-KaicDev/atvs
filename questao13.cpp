#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    std::string senha;
    std::string password;

    printf("Informe uma senha:  ");
    std::getline(std::cin, senha);

    while (true)
    {

        printf("Informe a senha: ");
        std::getline(std::cin, password);

        if (senha == password)
        {
            printf("ENTROUUUUUUUUUUUUU\n\n");
            break;
        }

        printf("\n\nErrouuuu\n\n");
    }
    return 0;
}
