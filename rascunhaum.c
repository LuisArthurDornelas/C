#include <stdio.h>
#include <stdlib.h>
struct node{
    int elemento;
    struct node *next;
};
typedef struct node node_t;
node_t *head;

node_t *push(int v, node_t **head){
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
void pop(){
    node_t *aux = head;
    head = aux -> next;
    aux = NULL;
}



void print_list(node_t *head){
    node_t *temp = head;
    while (temp != NULL){
        printf("%d ",temp->elemento);
        temp = temp->next;
    }
}
int main (void){
        push(1,&head);
        push (2,&head);
        push(3,&head);
        push(4,&head);
        pop();
        pop();
        print_list(head);

        return 0;
}
