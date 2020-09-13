#include <stdio.h>
#include <string.h>
char *muda(char str[]){
	int i = 0;
	char *novastr = malloc(sizeof(str));
	for(i;strlen(str);i++){
		str[i] = '1';
	}
	return str;
}
int main (){
	char string[]= "Once.in.a.blue.moon";  
	muda(string);
	printf("%s",string);

	return 0;
}


