#include <stdio.h>
#include <stdlib.h>

struct node{
    int valor;
    struct node *next;
};
typedef struct node node_t;
node_t *head;

void print_list(node_t *head){
    node_t *temp = head;
    while (temp != NULL){
        printf("%d ",temp->valor);
        temp = temp->next;
    }
}

node_t *insert_at_head(int v, node_t **head){
    node_t *new_node = malloc(sizeof(node_t));
    new_node -> valor = v;
    new_node -> next = NULL;
    node_t **aux = head;
    while(*aux != NULL){
        aux = &(*aux) ->next;
    }
    *aux = new_node;
    return new_node;
}

int main(void){
        
        insert_at_head(1,&head);
        insert_at_head(2,&head);
        insert_at_head(3,&head);
        print_list(head);
        return 0;
}