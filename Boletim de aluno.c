#include <stdio.h>

struct Aluno{ //Estrutura ou Grupo de variaveis
    float nota;
};

int main() {
    struct Aluno aluno[3];//Estrutura ou Grupo de variaveis
    int i,soma=0;
    float media;
    char nome[30];
    printf("Digite seu nome:\n");
    scanf("%s",nome);
    for(i=0;i<3;i++){//Laço de repetição
        printf("Digite as 3 notas:");
    scanf("%f",&aluno[i].nota);
    soma+=aluno[i].nota;
    }
    media=soma/3;
   printf("A média é: %.2f", media);
    return 0;//Fim do programa 

}