# include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *m;
    
    m = (int *) calloc(5,sizeof(int));
    for (i=0;i<5;i++)
    {
        printf ("Digite o elemento p%d:  ",i);
        scanf("%d",&m[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("O elemento m%d equivale a:  %d\n",i,m[i]);
    }

    free(m);

    
    for (i=0;i<5;i++)
    {
        printf("O elemento m%d equivale a:  %d\n",i,m[i]);
    }

    return 0;
}