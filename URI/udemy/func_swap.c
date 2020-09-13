#include <stdio.h>
swap (int *a,int *b)
{
    if (*b>*a)
    {
         int c;
        c = *a;
        *a = *b;
        *b = c;
        printf("Valores trocados!\n");
    }
    else
    {
        printf("Valores mantidos!\n");
    }
}
   



int main()
{
    int A,B;
    printf("Digite o primeiro valor:  ");
    scanf("%d",&A);
    printf("Digite o segundo valor:  ");
    scanf("%d",&B);
    
    printf("A = %d     B = %d\n",A,B);
    swap(&A,&B);
    printf("A = %d   B = %d",A,B);
    return 0;
}