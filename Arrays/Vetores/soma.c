/* Programa que declara e inicializa 3 vetores, sendo o terceiro um vetor
resultante da soma entre os elementos correspondentes dos vetores anteriores um e dois
*/

#include<stdio.h>

int main()
{
    int vetor1[5] = {1,2,3,4,5};
    int vetor2[5] = {6,7,8,9,10};
    int vetor3[5] = {vetor1[0] + vetor2[0], vetor1[1] + vetor2[1], 
    vetor1[2] + vetor2[2], vetor1[3] + vetor2[3], vetor1[4] + vetor2[4]};

    printf("Vetor 1:\n ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", vetor1[i]);
    }

    printf("\nVetor 2:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", vetor2[i]);
    }

    printf("\nVetor resultante da soma entre os elementos correspondentes dos vetores 1 e 2\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",vetor3[i]);
    }

    return 0;
}