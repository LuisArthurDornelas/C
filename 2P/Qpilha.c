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
        printf("%d \n",top->valor);
        Node_t *temp;
        if (top == NULL) return;
        temp = top;
        top = top-> link;

        free(temp);
}

void print_stack(Node_t *top){
        Node_t *auxi = top;
        while (auxi!=NULL){
                printf("%d\n",top->valor);
                auxi = auxi ->link;
        }
}
void difference(){
        int maior = -1001;
        int menor = 99999;
        Node_t *auxi = top;
        while (auxi!=NULL){
                if ((auxi->valor)<menor){
                        menor = auxi->valor;
                }
                if ((auxi->valor)>maior){
                        maior = auxi->valor;
                }
                auxi = auxi ->link;
        }

        printf("%d\n",maior-menor);
}
int main(){
        char opcao[20];
        int num;
        while (strcmp(opcao,"Finalizar")!=0){
                scanf("%s",opcao);
                if (strcmp(opcao,"push")==0){
                        scanf ("%d",&num);
                        push(num);
                }
                else if(strcmp(opcao,"pop")==0){
                        pop();
                }
                else if (strcmp(opcao,"abs")==0){
                        difference();
                }
        }
        return 0;
}