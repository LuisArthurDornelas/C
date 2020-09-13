#include <stdio.h>
int eucli(int a,int d){
    int resultado;
    if (a%d==0){    
        return d;
     
    }
    else{
        eucli(d,a%d);      
    }       
} 
int main(){
    int a,d,resultado;
    int i,casos;
    scanf("%d",&casos);
    int n1[casos], n2[casos],resultados[casos];
    for (i=0;i<casos;i++){
        scanf("%d %d",&a,&d);
        n1[i]=a;
        n2[i]=d;
        resultado = eucli(a,d);  
        resultados[i] = resultado;
    }
    for (i=0;i<casos;i++){   
        printf("MDC(%d,%d) = %d\n",n1[i],n2[i],resultados[i]);
    }
    return 0;
}