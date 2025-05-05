#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int i,soma;
    
    soma=0;//Varíavel
    
    for(i=2;i<=200;i+=2){//Repetição
        soma+=i;
    printf("A soma dos 100 primeiros números é:%d\n",soma);
    }
    return 0;//Fim do programa
}
