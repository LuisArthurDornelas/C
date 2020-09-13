#include <stdio.h>
#include <string.h>

struct st_aluno
{
    char matricula[10];
    char curso[20];
    char nome[50];
    int ano;
}aluno[3];

int main()
{
    int i;
    for (i=0;i<3;i++){
        printf("Digite a matricula do aluno %d: ",i+1);
        scanf("%s",aluno[i].matricula);
        printf("Digite o curso do aluno %d: ",i+1);
        scanf("%s",aluno[i].curso);
        printf("Digite o nome do aluno %d: ",i+1);
        scanf("%s",aluno[i].nome);
        printf("Digite o ano de nasc do aluno %d: ",i+1);
        scanf("%d",&aluno[i].ano);
        getchar();

    }
    for (i=0;i<3;i++){
        printf("=-=-=-=ALUNO %d=-=-=-=\n",i+1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Ano:  %d \n",aluno[i].ano);
        printf("Matricula: %s \n",aluno[i].matricula);
        printf("Curso: %s\n",aluno[i].curso);
    }
    return 0;
}