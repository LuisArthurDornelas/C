#include <stdio.h>
int main(){
	int c,i;
	printf("Digite um n�mero: ");
	scanf("%d",&i);
	i = i*-1;
	for (c=0;c>=i;i++)
	{
		printf ("%d  \0",i);
	}
	
	
	
	
	return 0;
}
