#include <stdio.h>

struct Pessoa{ //Estrutura ou Grupo de variaveis
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa pessoa[2];//Estrutura ou grupos de variaveis
    int i;
    
    for(i=0;i<2;i++){//Laço de repetição
        printf("Digite seu nome: \n");
        scanf("%s", pessoa[i].nome);
        printf("Digite sua idade: \n");
        scanf("%d", &pessoa[i].idade);
    }
    
    if(pessoa[0].idade > pessoa[1].idade){//Comparação 
        printf("Pessoa1 mais velha tem:%d\n", pessoa[0].idade);
    }
    else{
        printf("Pessoa2 mais velha tem: %d\n", pessoa[1].idade);
    }
    
    

    
    
    return 0;//Fim do programa
}