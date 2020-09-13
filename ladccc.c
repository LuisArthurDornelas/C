#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int idade;
    char nome[20];
    struct node* next;
};

typedef struct node node_t;

node_t *head = NULL;

void print_list(node_t *head){
    node_t *temp = head;
    while (temp!=NULL){
        printf("%d\n",temp->idade);
        printf("%s\n",temp->nome);
        temp = temp -> next;
    }
    printf("\n"); 
}

char* search(int val,node_t *head){
    node_t *aux = head;
    int num = 0;
    while (aux!=NULL){
        if (aux->idade == val){
            if(num==0){
                printf("%s",aux->nome);
            }else{
                printf(" %s",aux->nome);
            }
            num+=1;
        }
        aux = aux->next;
    }
    if (num==0){
        printf("Eleven nao tem amigos com essa idade.");
    }
    printf("\n");
    return "";
}

node_t *insert_at_head(int v, char *name, node_t **head){
    node_t *new_node = malloc(sizeof(node_t));
    new_node -> idade = v;
    strcpy(&new_node -> nome, name);
    new_node -> next = NULL;
    
    node_t **aux = head;
    while(*aux != NULL){
        aux = &(*aux) ->next;
    }
    *aux = new_node;
    return new_node;
}

int main(void){
    int amigos;
    scanf("%d",&amigos);
    int i;
    for (i=0;i<amigos;i++){
        char nome[20];
        int idade;
        scanf("%s  %d",&nome,&idade);
        insert_at_head(idade,nome,&head);
    }
    int busca;
    scanf("%d",&busca);
    search(busca,head);
}