//Programa que calcula a velocidade de um objeto

#include<stdio.h>

int main() {

    float distancia;
    float tempo;    

    printf("Calcule a velocidade de um objeto!\n");

    printf("Informe a distancia (em metros) a ser percorrida: \n");
    scanf("%f", &distancia);

    printf("Informe o tempo levado (em segundos) para percorrer essa dista  ncia: \n");
    scanf("%f", &tempo);

    float velocidade = distancia / tempo;

    printf("Velocidade do objeto: %.2f", velocidade);

    return 0;

}