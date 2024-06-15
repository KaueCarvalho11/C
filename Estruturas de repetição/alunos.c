/* Programa que realiza o cadastro de notas de alunos de acordo com a quantidade de
cadastros necessários informados e com base na nota, informa se o aluno foi aprovado 
ou reprovado.
*/

#include<stdio.h>

int main()
{
    int alunos;
    float nota;

    printf("Informe a quantidade de alunos que deseja cadastrar as notas: ");
    scanf("%d", &alunos);

    for(int i = 0; i < alunos; i++)
    {
        printf("\nInforme a nota do aluno %d: ", i+1);
        scanf("%f", &nota);

        if (nota >= 7.0)
            printf("Aluno %d aprovado!", i+1);
        
        else 
            printf("Aluno %d reprovado!", i+1);
        
    }

    printf("\nFim do cadastro de notas!");
    
    return 0;
}