#include <stdio.h>
int main(){
        int num;
        printf("Digite o ano: ");
        scanf("%d",&num);
        if (num%4==0&&num%100!=0)
        {
                printf("O ano %d eh bissexto",num);
        }
        else
        {
                printf("O ano %d nao e bissexto",num);
        }
        
        return 0;
}