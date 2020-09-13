#include <stdio.h>
int fatorial(int x)
{
    int resultado;
    if (x==0){
        resultado = 1;
    }
    else{
        resultado = x*fatorial(x-1);
    }
    return resultado;
}
int main(void){
        int numero, resultado;
        printf("Digite o numero:  ");
        scanf("%d",&numero);
        resultado = fatorial(numero);
        printf("O fatorial de %d eh %d. ",numero,resultado);
        return 0;
}