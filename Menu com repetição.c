#include <stdio.h>//Biblioteca
#include <locale.h>

int main() {//Inicio do Programa
    int opcao,num1,tabuada;
 do{//Inicio de repetição
        printf("\n---Tabuada---\n");
        printf("1 - Fazer tabuada\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){//Escolha junto com o case
            case 1:
            printf("Informe um número\n");
            scanf("%d", &num1);
            printf("%d x 0 = %d \n", num1, tabuada = num1 * 0 );
            printf("%d x 1 = %d \n", num1, tabuada = num1 * 1 );
            printf("%d x 2 = %d \n", num1, tabuada = num1 * 2 );
            printf("%d x 3 = %d \n", num1, tabuada = num1 * 3 );
            printf("%d x 4 = %d \n", num1, tabuada = num1 * 4 );
            printf("%d x 5 = %d \n", num1, tabuada = num1 * 5 );
            printf("%d x 6 = %d \n", num1, tabuada = num1 * 6 );
            printf("%d x 7 = %d \n", num1, tabuada = num1 * 7 );
            printf("%d x 8 = %d \n", num1, tabuada = num1 * 8 );
            printf("%d x 9 = %d \n", num1, tabuada = num1 * 9 );
            printf("%d x 10 = %d \n", num1, tabuada = num1 * 10);
            break;
            case 2:
            printf("Saindo...\n");
            break;
            default:
            printf("Opção Invalida! Tente Novamente\n");
        }
    } while(opcao != 2);//Fechamento do do
    return 0;//Fim do programa
    
}
