#include <stdio.h>
int main()
{       //define variaveis com as propor��es das matrizes
        int linhas1, colunas1,linhas2,colunas2;
        printf("Digite o numero de linhas1:  \n");
        scanf("%d",&linhas1);
        printf("Digite o numero de colunas1:  \n");
        scanf("%d",&colunas1);
        int matriz1[linhas1][colunas1];
        
        //preenche a primeira matriz
        int i,j,l,o;
        for (i=0;i<linhas1;i++)
        {
            for (j=0;j<colunas1;j++)
            {
                printf("Digite o elemento a%d%d \n",i,j);
                scanf("%d",&matriz1[i][j]);
            }

        }
        //define o tamanho da segunda matriz
        printf("Digite o numero de linhas 2\n");
        scanf("%d",&linhas2);
        printf("Digite o número de colunas 2\n");
        scanf("%d",&colunas2);
		//cria a segunda matriz
        int matriz2[linhas2][colunas2];
        
		//preenche a segunda matriz
		for (l=0;l<linhas2;l++)
        {
            for (o=0;o<colunas2;o++)
            {
                printf("Digite o valor B%d%d \n",l,o);
                scanf("%d",&matriz2[l][o]);
            }
        }
		printf("\n\n");
        printf("----MATRIZ 1----\n");
		for (i=0;i<linhas1;i++)
        {
            for (j=0;j<colunas1;j++)
            {
                printf("%d   ",matriz1[i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n\n"); 
		printf("----MATRIZ 2----\n");
        for (i=0;i<linhas2;i++)
        {
            for (j=0;j<colunas2;j++)
            {
                printf("%d   ",matriz2[i][j]);
            }
            printf("\n");
        }
        
		//AT� AQUI RODA SUAVE, A BRONCA T� AQ
	int matrizfinal[linhas1][colunas2];
        int c,d,k,soma;
		printf("----MATRIZ RESULTANTE----");
		for (c=0;d<linhas1;c++)
                {
        	for (d=0;d<colunas2;d++)
        	{
        		for (k=0;k<linhas2;k++)
				{
					soma = soma+matriz1[c][k]*matriz2[k][d];
				}        	
				matrizfinal[c][d] = soma;
				soma = 0;    		
			}
		}

		int z,y;
		for (z=0;z<linhas1;z++)
        {
            for (y=0;y<colunas2;y++)
            {
                printf("%d   ",matrizfinal[z][y]);
            }
            printf("\n");
        }
    return 0;
}
