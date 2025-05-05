#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int n1, n2, media;
    printf("Digite as duas notas");
    scanf("%d %d",&n1,&n2);
    media= (n1 + n2)/2;
    if(media>=7){//O if e o else estão dando uma condição
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
    return 0;//Fim do programa
}
