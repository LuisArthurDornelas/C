#include <stdio.h>
#include <stdlib.h>

int main()
{
int t,*p;
printf("Digite o tamanho do vetor:  ");
scanf("%d",&t);
p = calloc(t,sizeof(int));
int i;
for (i=0;i<t;i++)
{
    printf("Digite o elemento p%d :  ",i);
    scanf("%d",&p[i]);


}
for (i=0;i<t;i++)
{
    printf("O elemento p%d vale %d \n",i,p[i]);
    

}


return 0;
}

