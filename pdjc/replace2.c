#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>

char* replace(char* str,char cara){
        int i=0;
        while(str[i]!='\0'){
                if(str[i] == cara)
                        str[i] = ' ';
                        i++;
        }
        return str;
}
char* formater(char* str){
        strcpy(str,replace(str,'.'));
        strcpy(str,replace(str,'!'));
        strcpy(str,replace(str,','));
        return str;
}
int main(void)  
{  
        char string [100]= "Oblaa.!di.!Oblaa.da.,,LifeGoesOn";  
        strcpy(string,formater(string));
        
        
             
        printf("String após modificação: \n");  
        printf("%s", string);     
        return 0;  
}  