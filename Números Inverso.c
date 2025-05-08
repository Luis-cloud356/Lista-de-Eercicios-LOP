#include <stdio.h>//Biblioteca 
#include <locale.h>

int main(){//Inicio do programa
     int numeros[5];//Array serve pra fazer lista
    int i;
    
    printf("Digite 5 números:\n");
    for(i=0;i<5;i++){//Laço de repetição
        scanf("%d", &numeros[i]);
    }
    for(i=4;i>0;i--){
        printf("Os numeros %d, ", numeros[i]);
    
    }
    return 0;//Fim do programa
}
    
    

    
    

    
    




    