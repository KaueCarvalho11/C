/* Programa que cria um vetor com cinco números inteiros preenchidos no momento da declaração
em seguida, altera todos os valores dos índices pares (incluindo o índice 0) para que seu valor
seja multiplicado por 2. Ao final, imprime o vetor resultante
*/

#include<stdio.h>

int main ()
{
    int vetor[5] = {1, 2, 3, 4, 5};

    printf("Numeros dos indices pares (incluindo o indice 0) multiplicados por 2:\n");

    printf("%d\n%d\n%d", vetor[0] * 2, vetor[2] * 2, vetor[4] * 2);
}