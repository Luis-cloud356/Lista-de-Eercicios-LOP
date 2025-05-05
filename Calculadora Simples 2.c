#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int operador;
    int n1,n2,res;
    printf("Escolha uma das opções\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d",&operador);
    
    switch(operador){//O switch e o case é para escolha
        case 1:
        printf("Digite o primeiro número:");
        scanf("%f",&n1);
        printf("Digite o segundo número:");
        scanf("%f",&n2);
        res=n1+n2;
        printf("O resultado da soma é: %.2f",res);
        break;
        
        case 2:
        printf("Digite o primeiro número:");
        scanf("%f",&n1);
        printf("Digite o segundo número:");
        scanf("%f",&n2);
        res=n1-n2;
        printf("O resultado da subtração é: %.2f",res);
        break;
        
        case 3:
        printf("Digite o primeiro número:");
        scanf("%f",&n1);
        printf("Digite o segundo número:");
        scanf("%f",&n2);
        res=n1*n2;
        printf("O resultado da multiplicação é: %.2f",res);
        break;
        
        case 4:
        printf("Digite o primeiro número:");
        scanf("%f",&n1);
        printf("Digite o segundo número:");
        scanf("%f",&n2);
        res=n1/n2;
        printf("O resultado da divisão é: %.2f",res);
        break;
    }
    return 0;//Fim do programa
    
   
  
}
