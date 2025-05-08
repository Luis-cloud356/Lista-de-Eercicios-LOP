#include <stdio.h>

struct Pessoa{ //Estrutura ou Grupo de variaveis
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Pessoa pessoa1 = {"Luis",16, 10};
    
    printf("Nome:%s\n",pessoa1.nome);
    printf("Idade:%d\n",pessoa1.idade);
    printf("Altura:%.2f",pessoa1.nota);
    
    return 0;//Fim do programa
}
    
    

    
    

    
    




    