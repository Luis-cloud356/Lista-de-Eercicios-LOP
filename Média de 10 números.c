#include <stdio.h>//Biblioteca 
#include <locale.h>

int main(){//Inicio do programa
    float notas[10],soma, media=0;//array serve pra fazer lista
    int i;
    
    printf("Digite as 10 notas:\n");
    for(i=0;i<10;i++){//Repetição
        scanf("%f",&notas[i]);
        soma+=notas[i];
    }
    media=soma/10;
    printf("A média é: %.2f\n", media);
    return 0;//Fim do programa
    
    
}     


    