#include <stdio.h>
#define TAMANHO 10

int fila[TAMANHO]= {0,0,0,0,0,0,0,0,0,0};
int head = 0;
int tail = 0;

void lista_elementos()
{
    printf("=====FILA ATUAL=====\n");
    int i;
    for (i=0;i<TAMANHO;i++)
    {
        printf("/%d/-",fila[i]);
    }
    printf("\n\n");
    printf("Head: %d\n",head);
    printf("Tail: %d\n",tail);
}
void enqueue()
{
    if (tail<TAMANHO)
    {
        int val;
        printf("Digite um valor para ser adicionado:  ");
        scanf("%d", &val);
        fila[tail] = val;
        tail = tail + 1;
        lista_elementos();
    }
    else
    {
        printf("FILA CHEIA\n");
    }
}
void dequeue()
{
    if (head<tail)
    {
        fila[head]=0;
        head = head + 1;
        lista_elementos();
    }
    else
    {
        printf("FILA VAZIA!\n");
    }
}
void clear ()
{
    int i;
    for (i=0;i<TAMANHO;i++)
    {
        fila[i] = 0;
    }
    lista_elementos();

}

int main ()
{
    int opcao;
     do{
         printf("SELECIONE A OPCAO\n");
        printf("1- Inserir elemento (enqueue)\n");
        printf("2- Remover elemento (dequeue) \n");
        printf("3- Limpar fila \n");
        printf("4- Ver fila \n");
        printf("5- Sair\n\n");
        printf("Opção:  ");
        scanf("%d",&opcao);

    
        switch(opcao)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                clear();
                break;
            case 4:
                lista_elementos();
                break;
            case 5:
                break;
            default:
                printf("Opção inválida");
        }
    }
    while (opcao != 5);
    return 0;
}