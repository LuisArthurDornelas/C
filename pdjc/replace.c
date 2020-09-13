#include <stdio.h>
#include <string.h>
 
const char* replaceex(char* str,char a)
{
	int i = 0;
	for (i;strlen(str);i++)
	{
		if (strcmp(str[i],a)==0){
			str[i] = ' ';
		}
	}
	return str;
}
int main()  
{  
    	const char string[] = "Once in a blue moon";  
    	char ch = '-'; 
	char* novastring;
	novastring = replaceex(string, ch); 
      
    	//Replace space with specific character ch  
    	/*int i = 0;
		for(i; i < strlen(string); i++){  
        		if(string[i] == ' ')  
            			string[i] = ch;  
    }  
      */
    printf("String after replacing spaces with given character: \n");  
    printf("%s", novastring);  
          
    return 0;  
}

