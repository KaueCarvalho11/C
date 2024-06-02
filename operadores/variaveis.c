/* Programa que cria duas variáveis e troca os valores delas, imprimindo na tela
os valores antes e depois da troca
*/

#include<stdio.h>

int main() 
{
    int a = 1;
    int b = 3;
    int c;

    printf("a = %d\nb = %d", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nVariaveis depois da troca:\na = %d\nb = %d", a, b);
}
