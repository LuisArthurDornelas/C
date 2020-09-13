#include <stdio.h>
#include <stdlib.h>
struct node
{
    int valor;
    struct node *next;
};
typedef struct node node_t;
node_t *head;
print_list(node_t *head)
{
    node_t *temp = head;
    while (temp != NULL)
    {
        printf("%d - ",temp->valor);
        temp = temp->next;
    }
    printf("\n");
}
node_t *new_node(int value,node_t *l)
{
    node_t *result = malloc(sizeof(node_t));
    result -> valor = value;
    result -> next = NULL;
    return result;

}
int main ()
{
        node_t *temp;
        node_t *head;
        int i;
        for (i=0;i<20;i++)
        {
            
            temp = new_node(i,head);
            temp->next = head;
            head = temp;
        }

        
        
        
        print_list(head);



        
        return 0;
}
