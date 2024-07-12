#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    float notas[3];
    float media;
    std::string nome;

    while (true)
    {
        system("clear");
        printf("Informe o nome do aluno [sair p/ encerrar]: ");
        std::getline(std::cin, nome);

        if (nome == "sair")
        {
            break;
        }

        for (int i = 0; i < 3; i++)
        {
            printf("Informe a %iª nota: ", i + 1);
            std::cin >> notas[i];
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        media = (notas[0] + notas[1] + notas[2]) / 3;
        printf("\n\nAluno: %s\n", nome.c_str());
        printf("Media: %.1f\n", media);
        if (media >= 7)
        {
            printf("Situação: Aprovado\n");
        }
        else if (media >= 5)
        {
            printf("Situação: Recuperação\n");
        }
        else
        {
            printf("Situação: Reprovado\n");
        }

        printf("\n\nPressione qualquer tecla para continuar...");
        char key = getchar();
    }
    return 0;
}
