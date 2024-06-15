/* Programa que solicita que o usuário informe um número e em seguida, mostra sua tabuada
*/

#include<stdio.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro de 1 a 10: ");
    scanf("%d", &numero);

    for (int i = 0; i < 11; i++)
    {
        printf("\n%d x %d = %d ", numero, i, numero * i);
    }

    return 0;
}