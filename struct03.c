#include <stdio.h>
#include <string.h>

struct st_aluno 
{
    char nome[50]; //define dados da struct aluno
    char matricula[20];
    int n1,n2,n3;
    float media;
    char situacao[10];
};
struct st_registro
{
    struct st_aluno aluno[5]; //struct com dados de todos alunos
}registro;


int main()
{
    
    int i;
    printf("=-=-=-CADASTRO DE ALUNOS=-=-=-");
    for (i=0;i<5;i++);
    {
    
        printf("Digite o nome do %do aluno:  ",i+1); //escaneia cada item e preenche a struct
        scanf("%s",registro.aluno[i].nome);
        printf("Digite a matricula do %d aluno",i+1);
        scanf("%s",registro.aluno[i].matricula);
        printf("Digite a 1a nota do %do aluno:  ",i+1);
        scanf("%d",&registro.aluno[i].n1);
        printf("Digite a 2a nota do %do aluno:  ",i+1);
        scanf("%d",&registro.aluno[i].n2);
        printf("Digite a 3a nota do %do aluno:  ",i+1);
        scanf("%d",&registro.aluno[i].n3);
        registro.aluno[i].media = (registro.aluno[i].n1 + registro.aluno[i].n2 + registro.aluno[i].n3)/3; 
        
    }
    
    
    int maiorprimeira;//variavel da maior nota da primeira
    char nomemaiorprimeira [20];//variavel com o nome do aluno com a maior primaira nota
    char nomecranio [20];//nome do aluno com a maior media
    char nomebolso [20];//nome do aluno com menor media
    int menor = 0;//para calcular maior nota da primeira prova)
    int maiormedia = 0;// para calcular
    int menormedia = 9999;// achar menor media
    
    
    for (i=0;i<5;i++)
    {
        if (registro.aluno[i].n1>menor)//vê se a nota da primeira prova é a menor
        {
            menor = registro.aluno[i].n1;//atualiza o valor da var menor
            strcpy(nomemaiorprimeira,registro.aluno[i].nome);//salva o nome do aluno com a maior nota 1
            maiorprimeira = registro.aluno[i].n1;//salva o valor da maior nota 1
            
        }
        else if (registro.aluno[i].media>maiormedia) // procura a maior média
        {
            maiormedia = registro.aluno[i].media;//salva a maior média
            maiormedia = registro.aluno[i].media;//salva a maior media
            strcpy(nomecranio,registro.aluno[i].nome);//salva o nomde do aluno com maior media
        }
        else if(registro.aluno[i].media<menormedia)//procura menor media
        {
            
            menormedia = registro.aluno[i].media;//atualiza da var do valor da menor media
            strcpy(nomebolso,registro.aluno[i].nome);//salva o nome do aluno com a menor media
        }
        else if (registro.aluno[i].media<6)//define a situação de cada aluno
        {
            registro.aluno[i].situacao = "REPROVADO";
        }
        else
        {
            registro.aluno[i].situacao = "APROVADO";
        }   
    }
    printf("=-=-=SITUAÇÃO ALUNOS=-=-");
    for (i=0;i<5;i++)
    {
        printf("%s----%s",registro.aluno[i].nome,registro.aluno[i].situacao);

    }
    printf("=-=-=-=-maior media=-=-=-=-=-");
    printf("%d  ----- %s",maiormedia,nomecranio);
    
    printf("~~~~~~~~~~~menor media ~~~~~~~~~~~");
    printf("%d    %s",menormedia,nomebolso);
    
    
    printf("----------Maior n1-------------");
    printf("%d    %s",maiorprimeira,nomemaiorprimeira);

    



    return 0;
}