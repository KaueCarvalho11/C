/* Programa que solicita ao usuário uma tecla do teclado 
e informa a que funcionalidade a tecla digitada corresponde
*/

#include<stdio.h>

int main()
{

    char direcao;

    printf("Informe uma tecla: (w, a, s, d) ");
    scanf(" %c", &direcao);

    switch (direcao)
    {
    case 'w':
        printf("Cima");
        break;

    case 'a':
        printf("Esquerda");
        break;

    case 's':
        printf("Baixo");
        break;

    case 'd':
        printf("Direita");
        break;
    
    default:
        printf("Comando invalido");
        break;
    }
}