#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
        int valor;
        struct Node* link;
};
typedef struct Node Node_t;
Node_t* top=NULL;

void push(int x){
        Node_t* temp = (Node_t*)malloc(sizeof(Node_t));
        temp -> valor = x;
        temp-> link = top;
        top = temp;
}
void pop(){
        
        Node_t *temp;
        if (top == NULL) return;
        temp = top;
        top = top-> link;

        free(temp);
}

void print_stack(Node_t *top){
        Node_t *auxi = top;

        while (1){
                if (auxi->link!=NULL){
                        printf("%d ",auxi->valor);
                        auxi = auxi ->link;
                }
                else{
                        printf("%d",auxi->valor);
                        break;
                }
                
        }
}
int main (void){
        char opcao[20];
        int num;
        while (strcmp(opcao,"Finalizar")!=0){
                scanf("%s",opcao);
                if (strcmp(opcao,"Empilhar")==0){
                        scanf ("%d",&num);
                        push(num);
                }
                else if(strcmp(opcao,"Desempilhar")==0){
                        pop();
                }
                else if (strcmp(opcao,"Imprimir")==0){
                        print_stack(top);
                        printf("\n");
                }
                else if(strcmp(opcao,"Finalizar")==0){
                        break;
                }
        
        }
        return 0;
}