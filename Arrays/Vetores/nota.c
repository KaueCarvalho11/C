/* Programa que solicita ao usuário a nota de 5 alunos e a armazena em um vetor e, 
no fim, imprime as notas informadas
*/

#include<stdio.h>

#define NUM_ALUNOS 5

int main()
{
    float nota[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Informe a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
    }

    printf("Notas informadas\n");
    
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Aluno %d: %.1f\n", i+1, nota[i]);

    }

    return 0;
}