/* Programa que solicita que o usuário informe valores inteiros, até que o valor 
informado seja igual a 0
*/

#include<stdio.h>

int main()
{
    int numero = -1;

    while (numero != 0)
    {
        printf("Informe um numero inteiro (0 para sair):");
        scanf("%d", &numero);
        printf("\nNumero informado: %d\n", numero);
    }

    printf("Fim da execucao do programa!");

    return 0;
}