#include <stdio.h>
#include <string.h>
struct st_aluno // 
{
    char matricula[10];
    char curso[20];
    char nome[50];
    int ano;
};
struct st_agenda 
{
    struct st_aluno contatos[3];
}agenda;
int main()
{
    int i;
    for (i=0;i<3;i++)
    {
        printf("Digite a matricula do aluno %d: ", i+1); 
        scanf("%s",agenda.contatos[i].matricula);
        printf("Digite o curso do aluno %d: ", i+1);
        scanf("%s",agenda.contatos[i].curso); 
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s",agenda.contatos[i].nome);
        printf("Digite o ano de nasc do aluno %d: ", i+1);
        scanf("%d",&agenda.contatos[i].ano);
        getchar();

    }
    for (i=0;i<3;i++)
    {
        printf("=-=-=-=ALUNO %d=-=-=-=\n",i+1);
        printf("Nome: %s\n", agenda.contatos[i].nome);
        printf("Ano:  %d \n",agenda.contatos[i].ano);
        printf("Matricula: %s \n",agenda.contatos[i].matricula);
        printf("Curso: %s\n",agenda.contatos[i].curso);
    }
    return 0;
}