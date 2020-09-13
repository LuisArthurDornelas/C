#include <stdio.h>
#include <stdlib.h>

typedef struct dataNode{
    int idade;
    char nome[20];
    DataNode* next;
}DataNode;
DataNode *insert_at_head(DataNode **head,DataNode *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}
DataNode *push(int value,char name[20],DataNode *head)
{
    DataNode *result = malloc(sizeof(DataNode));
    result -> idade = value;
    result -> nome = name;
    result -> next = head;
    *head = result;
    /*
    pegar head
    apontar head pra o novo elemento
    apontar esse novo elemento pro proximo
    */
   
    return result;
}

typedef struct list{
    int size;
    DataNode* head;
}List;


List* createList(){
    List* lista = (List*) malloc(sizeof(List));
    lista -> size = 0;
    lista -> head = NULL;
    return lista;

}
int main(void)
{       
        List* lista = createList();
        char nome[20];
        int idade;
        scanf("%d",&idade);
        scanf("%s",nome);
        DataNode *head;
        DataNode *temp;
        *push(idade,nome,head);
        insert_at_head(&head,temp)







        return 0;
}