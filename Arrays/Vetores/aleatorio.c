/* Programa que solicita que o usuário informe 6 valores inteiros entre 1 e 60(inclusive)
Após os valores serem informados, gera seis números aleatórios e indica quantos o usuario acertou
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MIN 1
#define MAX 60
#define NUM_NUMEROS 6

int main()
{
    int usuario[NUM_NUMEROS];
    int numeros_sorteados[NUM_NUMEROS];
    int acertos = 0;

    srand(time(NULL));

    printf("Informe 6 valores entre 1 e 60\n");

    for (int i = 0; i < NUM_NUMEROS; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &usuario[i]);
    }

    printf("Numeros sorteados:\n");

    for (int i = 0; i < NUM_NUMEROS; i++)
    {
        numeros_sorteados[i] = MIN +(rand() % (MAX - MIN + 1));
        printf("%d\t", numeros_sorteados[i]);
    }

    for (int i = 0; i < NUM_NUMEROS; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if (usuario[i] == numeros_sorteados[j])
            {
                acertos++;
                break;
            }
        }
    }

    printf("\nVoce acertou %d numeros.\n", acertos);

    return 0;
}