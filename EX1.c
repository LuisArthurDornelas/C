#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Digite o primeiro valor: ");
	scanf("%d", &a);
    printf("Digite o segundo valor: ");
	scanf("%d", &b);
    printf("Digite o terceiro valor:  ");
    scanf("%d", &c);
    printf("Valores inseridos: %d, %d e %d\n", a, b, c);
	if (a>b && a>c) { // && = and; || = or; ! = not;
		printf("Maior valor: %d",a);
	}
	if (b>a && b>c){
		printf("Maior valor: %d",b);	
	}
	if (c>a && c>b){
		printf("Maior valor: %d",c);
	}
    return 0;
}
