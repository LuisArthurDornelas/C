/*


em vez de variaveis locais, ponteiros e endereços de memoria !!! vai e fazzz

certo dessa vez me ve 
seria algo colocando tipo

tu tava fazendo certo
tu tava acertando
continua


hm
eu teria que declarar um valor c <- sim, é quase igual ao codigo q tu tava fazendo
porem com ponteiros

*ponteiro = valor contido no endereço de memoria
&ponteiro = endereço de memoria da variavel

tu ta indo certo, vai vai vai, continua sem medo <- o covarde morre mil vezes antes de morrer de fato
* é ponteiro e & é endereço, né? <- sim ooof dois doentes

e agora???
num funfou
calma
certo
vo testar tu tem que passar os endereços de memoria ! desculpa n ter visto isso, to com sono
certo, faz sentido passar o endereçõ como parametro
^ não ironicamente ^ ?  talvez
eu pensei não ironicamente mas depois o sentido se abstraiu
calma


bora aprender linked list oof KKKKKKKKKKKK
calma, aprender é facil
dificil eh aplicar
certo, o quão cansado tu tá, queria ir pra varanda fumar um cingarão ligeiro
eu to ok
posso fazer isso o dia td
vai fumar ookok


*/


void swap (int *a,int *b)  
{
      int c; 
      c = *a;
      *a = *b;
      *b = c;  
}
int main()
{
      int a,b;
      a=10;
      b=20;
      printf("A =%d   B = %d",a,b);
      swap(&a,&b);
      printf("A = %d   B= %d",a,b);


      return 0;
}