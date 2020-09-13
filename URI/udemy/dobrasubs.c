#include <stdio.h>
soma (int* x,int* y)
{
    int c;
    c = *x + *y;
    *x = c;
}
int main ()
{
    int a=5,b=5;

    printf(" A = %d   B = %d\n",a,b);   
    soma(&a,&b);
    printf(" A = %d   B = %d",a,b);   




    return 0;
}