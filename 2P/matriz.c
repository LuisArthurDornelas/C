#include <stdio.h>
int main(){
        int col, lin, i, j;
        printf("Digite o numero de linhas: ");
        scanf("%d",&lin);
        printf("Digite o numero de colunas: ");
        scanf("%d",&col);
        int matriz[lin][col];
        for (i=0;i<lin;i++){
                for (j=0;j<col;j++){
                        printf("Digite o elemento %dx%d:  ",i+1,j+1);
                        scanf("%d",&matriz[i][j]);
                }
        }
        printf("\n\n\n");
        for (i=0;i<lin;i++){
                for (j=0;j<col;j++){
                        printf("%d ",matriz[i][j]);
                }
                printf("\n \n");
        }      


    
    return 0;
}