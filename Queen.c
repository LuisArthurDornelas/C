#include <stdio.h>
#include <stdlib.h>
struct node{
    int num;
    char nome[20];
    struct node* next;
};

typedef struct node node_t;

node_t *head = NULL;

char* search(int val,node_t *head){
    node_t *aux = head;
    while (aux!=NULL){
        if (aux->num == val){
            return aux-> nome;
        }
        else{
            aux = aux->next
        }

    }
}

void print_list(node_t *head){
    node_t *temp = head;
    while (temp!=NULL){
        printf("%d\n",temp->num);
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
    head = insert_at_head(5,head);
    print_list(head);
    return 0;
}