#include <stdio.h>

void incrementa(int* n)
{
        printf("Antes de incrementar: %d\n",(*n));
        printf("O endereco de memoria : %d\n",n);
        (*n)++;
        printf("Depois de incrementar: %d\n",(*n));
}

int main()
{
        int numero = 10; 
        incrementa(&numero);
        printf("O valor atualizado é %d",numero);
        return 0;
}