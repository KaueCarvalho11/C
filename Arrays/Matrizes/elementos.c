/* Programa que solicita que o usuário preencha elementos de uma matriz 3x3
de inteiros e imprime na tela a matriz formada e o maior valor informado
*/

#include<stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;
    int maior;

    printf("Preencha a matriz\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o valor para a posicao[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("Matriz resultante\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor informado: %d", maior);

    return 0;
}