#include <stdio.h>
int isprime(int a){
        int i, flag;
        if (a<=1){
                return 0;
        }
        flag = 0;
        for (i=2;i<=a/2;i++){
                if (a%i==0){
                        flag =1;
                        break;
                }
        }

        if (flag==0){
                return 1;
        }
        else{ 
                
                return 0;
        }
        }


int main(){
        int num;
        while (1){
                scanf("%d",&num);
                printf("%d \n",isprime(num));
        }
}