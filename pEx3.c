#include <stdio.h>

int main (){
  
	int tamanhoArray,i;
  
	printf("Digite o tamanho da array: ");
	scanf("%d",&tamanhoArray);
	printf("%d \n",tamanhoArray);
  
	int myArray[tamanhoArray];
	//printf(myArray); myArray[5] -> [0] .. [4]
  
	for (i=0;i<tamanhoArray;i++){
		printf("Digite o elemento %d da array: ",i);
		scanf("%d",&myArray[i]);
	}
  
	for (i=0;i<tamanhoArray;i++){
		printf("%d", myArray[i]);
	}	
		
	
	return 0;
}