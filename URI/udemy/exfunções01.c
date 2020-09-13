/*#include <stdio.h>
int main(){
        int nota1,nota2,nota3,media;
        char tipomedia;
        scanf("%d %d %d %c",&nota1,&nota2,&nota3,tipomedia);
        calc_media(nota1,nota2,nota3,tipomedia);






        return 0;
}
    int calc_media(int n1,int n2,int n3,char letra)
    {
            if (letra == "A"){
                int media;
                media = n1+n2+n3/3;
                return media;

            }
            else if (letra == "P")
            {
                int media;
                media = ((n1*5)+(n2*3)+(n3*2))/10;
                return media;
            }
    }
    */

void swap(int a,int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main ()
{
    int a,b;
    a=10;
    b=20;
    printf("A = %d   B = %d",a,b);

    swap(a,b);
    printf("A = %d   B = %d",a,b);




    return 0;
}