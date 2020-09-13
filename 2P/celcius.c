#include <stdio.h>
int main(){
        float escolha,num, temp;
        printf("Digite a temperatura para conversao: \n");
        scanf("%f",&num);
        printf("1) Celsius para Fahreinheit\n2)Fahreinheit para Celcius\n");
        scanf("%f",&escolha);
        if (escolha==1)
        {
                temp = num;
                num = (num*9/5) + 32;
                printf("%.2fC = %.2fF",temp,num);
        }
        if (escolha ==2)
        {
                temp = num;
                num = ((num-32)*5)/9;
                printf("%.2fF = %.2fC",temp,num);
        } 
        return 0;
}