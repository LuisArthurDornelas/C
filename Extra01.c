#include <stdio.h>
int main(){
        int num, limite;
        scanf("%d",&num);
        scanf("%d",&limite);
        int i,cont = 0;
        for (i=1;i<limite;i++)
        {
            if (i%num==0)
            {
                cont++;
            }
        }
        printf("O numero %d tem %d multiplos menores que %d.",num,cont,limite);
        return 0;
}