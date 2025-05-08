#include <stdio.h>//Biblioteca 
#include <locale.h>

int main(){//Inicio do programa
    int fatorial,num1,i, soma;
    
    printf("Informe um número positivo:");
    scanf("%d",&num1);
    
    fatorial=num1;
    
        for(i=num1 - 1;i>=1;i--){//Esta como laço repete até dar certo
              fatorial = fatorial*i;
            }
        printf("O fatorial é:%d\n", fatorial);
return 0;//Fim do programa   
    
}     


    