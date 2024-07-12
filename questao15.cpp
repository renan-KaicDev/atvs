/*

Escreva um programa que gere um número aleatório entre 1 e 100 e peça ao usuário
adivinhar o número. O programa deve dar dicas ao usuário se o seu palpite foi maior ou
menor. O jogo deve terminar quando o usuário adivinhar o número corretamente. Utilize a
estrutura while para controlar o loop do jogo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    int palpite, tentativas = 0;


    while (true)
    {
        printf("Informe um palpite: ");
        scanf("%d", &palpite);

        if (tentativas == 10)
        {
            printf("Você excedeu o número de tentativas.\n");
            break;
        }

        if (palpite == numero)
        {
            printf("Parabéns, você acertou!\n");
            break;
        }
        else if (palpite > numero)
        {
            printf("Seu palpite foi maior que o número correto [ %d tentativas restantes ].\n", 10 - tentativas);
        }
        else
        {
            printf("Seu palpite foi menor que o número correto.  [ %d tentativas restantes ].\n",  10 - tentativas);
        }

        tentativas++;
    }

    return 0;
}
