#include <stdio.h>
int main(){
        int matriz[3][3],i ,j ,elemento;
        int somadiag, maior =-9999, delta;
        float soma, media;
        for (i=0;i<3;i++){
                for (j=0;j<3;j++){
                        scanf("%d",&elemento);
                        matriz[i][j] = elemento;
                        soma += elemento;
                        if (elemento>maior){
                                maior = elemento;
                        }
                }
        }
        media = soma/9;
        for (i=0;i<3;i++){
                somadiag += matriz[i][i];
        }
        if (maior>0){
                delta = 1;
        }
        if (maior == 0){
                delta = 0;
        }
        if (maior<0){
                delta = -1;
        }
        printf("%.2f %d %d %d",media, maior, delta, somadiag);
        
        return 0;
}