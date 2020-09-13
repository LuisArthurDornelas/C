#include <stdio.h>

int main ()
{
    float array [10]={1,2,3,4,5,6,7,8,9,10};
    int c;
    printf("POSICAO     VALOR    ENDERECO\n");
    for (c=0;c<10;c++){
        printf("   %d        %.2f        %p \n",c,array[c],array[c]);
    }

    return 0;
}