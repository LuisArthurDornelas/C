#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int idade;
    struct node* next;
};

typedef struct node node_t;

node_t *head = NULL;

void print_list(node_t *head){
    node_t *temp = head;
    while (temp!=NULL){
        printf("%d\n",temp->idade);
        temp = temp -> next;
    }
    printf("\n"); 
}

node_t insert_at_head(int v,node_t *head){
    node_t *new_node = malloc(sizeof(node_t));
    new_node -> num = v;
    new_node -> next = head;
    head = new_node;
    return *head;
}

int main(void){
    int amigos;
    scanf("%d",&amigos);
    int i;
    for (i=0;i<amigos;i++){
        int idade;
        scanf("%d",&idade);
        insert_at_head(idade,&head);
    }
    int busca;
    scanf("%d",&busca);

}