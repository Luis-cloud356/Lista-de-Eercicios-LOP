#include <stdio.h>//Biblioteca
#include <locale.h>

int main() { //Inicio do Programa
    int n;
    printf("Digite o número");
    scanf("%d", &n);
    if(n % 2==0){ //O if e o else são para dar uma condição
        printf("O número é par");
    }
    else{
        printf("O número é impar");
        
    }
    return 0;//Encerrar o programa
}