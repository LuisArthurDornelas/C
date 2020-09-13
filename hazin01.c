#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
        int elemento;
        struct node *next;
};
typedef struct node node_t;
node_t *head;

node_t *enfileira(int v, node_t **head)
{
        node_t *new_node = malloc(sizeof(node_t));
        new_node -> elemento = v;
        new_node -> next = NULL;
        node_t **aux = head;
        while(*aux != NULL){
            aux = &(*aux) ->next;
        }
        *aux = new_node;
        return new_node;
}
void desenfileirar()
{
        node_t *aux = head;
        head = aux -> next;
        aux = NULL;
}

void print_list(node_t *head)
{
        node_t *temp = head->next;
        printf("%d",head->elemento);
        while (temp != NULL){
                printf(" %d",temp->elemento);
                temp = temp->next;
        }
}
int main (void){
        char opcao[20];
        int num;
        while (strcmp(opcao,"Finalizar")!=0){
                scanf("%s",opcao);
                if (strcmp(opcao,"Enfileirar")==0){
                        scanf ("%d",&num);
                        enfileira(num,&head);
                }
                else if(strcmp(opcao,"Desenfileirar")==0){
                        desenfileirar();
                }
                else if (strcmp(opcao,"Imprimir")==0){
                        print_list(head);
                        printf("\n");
                }
                else if(strcmp(opcao,"Finalizar")==0){
                        break;
                }
        
        }
        return 0;
}
