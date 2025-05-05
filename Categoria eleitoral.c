#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int idade;
    printf("Digite sua idade");
    scanf("%d",&idade);
    if(idade<16){//O if e o else estão comparando 
        printf("Não pode votar");
    }
    else if(idade>=18 && idade<=69){
        printf("Voto obrigatorio");
    }
    else{
        printf("O voto é facultativo");
    }
    return 0;//Fim do programa
  
}
