#include<stdio.h>

int main()
{
    int inteiro1 = 5;
    int inteiro2 = 10;
    int resulta_int;
    float flutuante = 2.7;
    float resulta_float;

    resulta_int = inteiro1 + inteiro2;
    resulta_float = flutuante / 1.5;

    resulta_int ++; 

    printf("Resultante das operacos com os valores inteiros: %d\n", resulta_int);
    printf("Resultante das operacoes com os valores em ponto flutuante: %.1f", resulta_float);

    return 0;

}