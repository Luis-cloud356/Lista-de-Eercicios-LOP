#include <stdio.h>//Biblioteca 
#include <locale.h>

int main(){//Inicio do programa
     int numeros[10], par = 0;//Array serve pra fazer lista
    int i;
    
    printf("Digite 10 números:\n");
    for(i=0;i<10;i++){//Laço de repetição
        scanf("%d", &numeros[i]);
    if(numeros[i]%2==0){//Comparação
        par++;
    }
    
    }
    printf("Os números pares são: %d\n",par);
    
    return 0;//Fim de programa
    
    
}
    
    

    
    




    