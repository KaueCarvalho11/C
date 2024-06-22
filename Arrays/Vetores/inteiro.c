/* Programa que solicita que o usuário informe valores para gerar e imprimir um vetor
*/

#include<stdio.h>

int main()
{
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    printf("Numeros informados:");

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", vetor[i]);
    }

    return 0;
}