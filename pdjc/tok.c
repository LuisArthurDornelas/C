#include <stdio.h>
#include <string.h>

int quantasPalavras (char *string)
{
        int i = 0, nPalavras = 1;
        while (string[i] != '\0'){
                if (string[i] == ' ')
                        nPalavras++;
                i++;
        }
        return nPalavras;
}

int main() 
{

        int i=0,j=0,nRep = 0,maiorNRep = 0,nPalavras;
        char maisRepString[100];
        char matrizDePalavras[10000][10000];
        char string[1000000];
        fgets(string,100,stdin); 
        nPalavras = quantasPalavras(string);  
        char *token = strtok(string, " "); 
        while (token != NULL) { 
                strcpy(matrizDePalavras[i],token);
                token = strtok(NULL, " ");
                i++;
        }
        for (i=0;i<nPalavras;i++){
                for (j=0;j<nPalavras;j++){
                        if (strcmp(matrizDePalavras[i],matrizDePalavras[j]) == 0){
                                nRep++;
                        }
                }
                if (nRep > maiorNRep){
                        maiorNRep = nRep;
                        strcpy(maisRepString, matrizDePalavras[i]);
                }
        }
        printf("%s",maisRepString);
  
    return 0; 
} 