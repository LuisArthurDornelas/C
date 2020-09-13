#include <stdio.h>
int main(){
        int col, lin, i, j;
        scanf("%d %d",&lin,&col);
        int matriz[lin][col];
        for (i=0;i<lin;i++){
                for (j=0;j<col;j++){
                        
                        scanf("%d",&matriz[i][j]);
                }
        }
        int novamat[col][lin];
        for (i=0;i<col;i++){
                printf("| ");
                for (j=0;j<lin;j++){
                        novamat[i][j] = matriz[j][i];
                        printf("%d ",novamat[i][j]);
                }
                printf("|");
                printf ("\n");
        }      
        return 0;
}