#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int i,tabuada,n1;
     printf("Digite o número\n");
     scanf("%d",&n1);
     for(i=0;i<=10;i++){//Repetição
         tabuada=n1*i;
         printf("O valor é:%dx%d=%d\n",i,n1,tabuada);
     }
     return 0;//Fim do programa
}
