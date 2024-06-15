/* Programa que imprime na tela uma contagem do número 1 até o 4
*/

#include<stdio.h>

int main()
{
    int i = 0;

    while(i < 5)
    {
        printf("Valor de i: %d\n", i);
        i += 1;
    }

    printf("Fim do laco!");

    return 0;   
}