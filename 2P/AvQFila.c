#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
        int ident;
        struct node* next;
};
typedef struct node s_fila;
s_fila* head = NULL;

void push(int x){
        s_fila* temp = malloc(sizeof(s_fila));
        temp ->ident = x;
        temp->next = head;
        head = temp;
}

void pop(){
        s_fila* temp = malloc(sizeof(s_)
}
