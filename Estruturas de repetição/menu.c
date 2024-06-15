/* Programa que cria um menu interativo
*/

#include<stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("\nMENU DE OPCOES!\n1 - Mensagem 1\n2 - Mensagem 2\n3 - Sair\n ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Siga em frente!\n");
            break;

        case 2:
            printf("Persista!\n");
            break;

        case 3:
            printf("Encerrando execucao do programa.");
            break;
        
        default:
            printf("Opcao invalida.\n");
            break;
        }

    }
    while(opcao != 3);

    return 0;
}