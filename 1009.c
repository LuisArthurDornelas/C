#include <stdio.h>
int main()
{
    double sal,vend,total;
    char nome[100];

    scanf("%lf",nome);
    scanf("%lf",&sal);
    scanf("%lf",&vend);
    total = sal + (vend*0.15);
    printf ("TOTAL = R$ %.2lf\n",total);


    return 0;
}