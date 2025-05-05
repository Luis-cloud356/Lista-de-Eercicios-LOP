#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int n1, n2;
    printf("Digite dois números");
    scanf("%d %d",&n1, &n2);
    if(n1>n2){ //O if e o else são para comparação
        printf("O %d é maior que %d", n1, n2);
    }
    else if(n1<n2){
        printf("O %d é maior que %d", n2, n1);
    }
    else{
        printf("Os números são iguais");
    }
    return 0;//Encerramento do programa
}
