#include <stdio.h>

typedef struct {//Estrutura de variaveis
    char nome[50];
    float preco;
    int quant;
} Produto;

int main() {
    Produto carrinho[5];//Variavel do struct
    float soma = 0;
    
    for(int i=0;i<5;i++){//Laço de repetição
        printf("Digite o nome do produto:\n");
        scanf("%s", carrinho[i].nome);
        
        printf("Digite o preço do produto:\n");
        scanf("%f", &carrinho[i].preco);
        
        printf("Digite a quantidade:\n");
        scanf("%d",&carrinho[i].quant);
        soma += carrinho[i].preco*carrinho[i].quant;
    }
    
    printf("\n Dados dos Produtos:\n");
    for(int i=0;i<3;i++){
        printf("Produto: %s, Preço:%.2f\n", carrinho[i].nome, carrinho[i].preco);
    }
    printf("Valor Total da compra: %.2f\n", soma);
    return 0;//Fim do programa
}