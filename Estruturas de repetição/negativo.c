/* Programa que solicita que o usuário informe números até que o valor informado
seja igual a 0
*/

#include<stdio.h>

int main()
{
    int numero = 0;

    do
    {
        printf("\nInforme um numero inteiro (numero negativo para encerrar o programa): ");
        scanf("%d", &numero);
    } while (numero >= 0);

    printf("\nFim da execucao do programa.");

    return 0;
    
}