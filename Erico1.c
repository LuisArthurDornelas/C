#include <stdio.h>
int main(int argc,char *argv[])
{
    int resultado,base,expoente;
    base = atoi(argv[1]);
    expoente = atoi(argv[2]);
    for (resultado=1;expoente>=1;--expoente){
        resultado = base*expoente;
    }
    printf("%d",resultado);
    return 0;
}