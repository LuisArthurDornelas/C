#include <stdio.h>
#include <stdlib.h>
struct node
{
    int valor;
    struct node *next;
};
typedef struct node node_t;
print_list(node_t *head)
{
    node_t *temp = head;
    printf("Head -- %d\n",head->valor);
    while (temp != NULL)
    {
        printf("%d - ",temp->valor);
        temp = temp->next;
    }
    
    printf("\n");
    return head;

}
node_t *push(int value,node_t *l)
{
    node_t *result = malloc(sizeof(node_t));
    result -> valor = value;
    result -> next = NULL;
    return result;
}

node_t *insert_at_head(node_t **head,node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}

int main ()
{
        node_t *temp;
        node_t *head;
        int i,input,tamanho;
        printf("Digite o tamanho:  \n");
        scanf ("%d",&tamanho);
        for (i=0;i<tamanho;i++)
        {
            printf("Digite o %d elemento:  \n");
            scanf("%d",&input);
            temp = push (valor, head);
            head = insert_at_head(&head,temp);
            
        }
       

        
        print_list(*head);
        return 0;
}
