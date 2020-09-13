#include <stdio.h>
int main(){
	int i,j;
	int linhas,colunas;
	//definir linhas e colunas
	printf("Digite o numero de materias: \n");
	scanf("%d",&linhas);
	printf("Digite onumero de provas:\n");
	scanf("%d",&colunas);
	
	int notas [linhas][colunas];//cria matriz notas
	for (i=0;i<linhas;i++){
		for (j=0;j<colunas;j++){
			printf("Digite o valor da %d prova da %d materia: \n",j+1,i+1);
			scanf("%d",&notas[j][i]);//adiciona as notas na matriz
		}
	}

	for (i=0;i<linhas;i++){
		printf("\n");
		for (j=0;j<colunas;j++){
			printf("%d ",notas[j][i]);//imprime cada nota de	
	                                         //cada materia acessando a matriz		
			
	
		}
	}	
	
	return 0;
}
