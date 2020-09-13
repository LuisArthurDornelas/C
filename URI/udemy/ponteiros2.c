#include <stdio.h>
comparador(int v1,int v2)
{
    int end1,end2;
    end1=&v1;
    end2=&v2;
    if (end1>end2)
    {
        printf("O endereço de &d é maior\n",v1);
        printf ("%d > %d",end1,end2);
    }
    else
    {
        printf("O endereço de %d é maior\n",v2);
        printf("%d < %d ",end1,end2);
    }
    




}
int main ()
{
    int vari1,vari2;
    printf("Digite a primeira variável\n");
    scanf("%d",&vari1);
    printf("Digite a segunda variável: \n");
    scanf("%d",&vari2);
    
    
    
    comparador(vari1,vari2);


    return 0;
}