#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro{
        char name[100];
        float price;
        int qtd;
        struct registro* next;
};
typedef struct registro produto_s;
produto_s *head = NULL;

void print_list(produto_s *head)
{
        produto_s *temp = head;
        while (temp!=NULL){
            
                printf("%s\n",temp->name);
                printf("%.2f\n",temp->price);
                printf("%d\n",temp->qtd);               
                temp = temp -> next;
        }
        printf("\n"); 
}

produto_s *insert(char *nome ,float preco, int quant, produto_s **head)
{
        produto_s *novo_prod = malloc(sizeof(produto_s));
        strcpy(novo_prod -> name, nome);
        novo_prod -> price = preco;
        novo_prod -> qtd = quant;
        novo_prod -> next = NULL;
        
        produto_s **aux = head;
        while(*aux != NULL){
                aux = &(*aux) ->next;
        }
        *aux = novo_prod;
        return novo_prod;
}

void reemove(char* nome, int quant, produto_s **head)
{
        produto_s* auxi,* novo;
        auxi = *head;
        if (strcmp((*head)-> name, nome)==0){//se o item a remover for o head
                novo = auxi -> next;
                *head = novo;

        }
        else{
                while (strcmp(auxi-> name, nome)!=0){
                        novo = auxi;
                        auxi = auxi -> next;
                }            
                auxi -> qtd -= quant;//CHECAR SE ITEM É O PRIMEIRO
                if (auxi -> qtd == 0){
                        novo -> next = auxi -> next;
                        free (auxi);                   
                }      
        }    
}
        
char* search(char* nomeprod, produto_s *head)
{
        produto_s *searcher = head;
        int num = 0;
        while(searcher != NULL){
                if (strcmp(searcher->name,nomeprod)==0){
                        printf("%s\n",searcher->name);
                        printf("- %.1f\n",searcher->price);
                        printf("- %d\n\n",searcher->qtd);
                        num += 1;
                }
                searcher = searcher -> next;
        }
                if (num == 0){
                        printf("%s nao foi encontrado.\n\n",nomeprod);
        	}
        return ""; 
}

void remove_class(float limite,produto_s **head)
{
        produto_s* aux = *head;
	while (aux != NULL){
		if (aux -> price>limite){
		    reemove(aux->name,aux->qtd,head);		    		    
        	}               
                    aux = aux -> next;                
        }       
}        
void consult(produto_s *head)
{
        float total;
        float allprod = 0;
        while (head != NULL){
                total = head -> price * head -> qtd;
                allprod += total;
                head = head -> next;
        }
        printf("Atualmente a lista esta em R$%.1f\n\n",allprod);
}

int main(void){
       
        char opcao[20];
        char nome[20];
        float preco;
        int quantidade;
        int a =0;
        while ((scanf(" %s",opcao)!=EOF)) {
              
                if (strcmp(opcao,"INSERIR")==0){
                        scanf("%s %f %d",nome,&preco,&quantidade);
                        insert(nome,preco,quantidade,&head);
                }
                if (strcmp(opcao,"REMOVER")==0){
                        scanf("%s %d",nome,&quantidade);
                        reemove(nome,quantidade,&head);
                }
                else if (strcmp(opcao,"CONSULTAR")==0){
                        consult(head);
                }
                else if (strcmp(opcao,"PROCURAR")==0){                      
                        scanf("%s",nome);
                        search(nome,head);
                }
                else if (strcmp(opcao,"REMOVERGRUPO")==0){
                        scanf("%f",&preco);
                        remove_class(preco,&head);
                }
                else if(strcmp(opcao,"PRINT")==0){
                        print_list(head);
                }

                
        }       
        return 0;
}
	