#include <stdio.h>
#include <string.h>
int main()
{
        int capsulas = 0;
        int i,qtd;
        char tamanho[2];


        for(i=0;i<7;i++){
            
            scanf("%d",&qtd);
            scanf("%s",&tamanho);
            if ((strcmp(tamanho,"P")==0)||(strcmp(tamanho,"p")==0)){
                capsulas += qtd*10;

            }
            else if ((strcmp(tamanho,"G")==0)||(strcmp(tamanho,"g")==0)){
                capsulas += qtd*16;

            }
           

        }
    int xicaras;
    xicaras = capsulas*2;
    printf("%d\n",capsulas);
    printf("%d",xicaras/7);
    
    return 0;
}