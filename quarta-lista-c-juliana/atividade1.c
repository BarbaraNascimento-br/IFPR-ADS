#include <stdio.h>
#include <crypt.h>

int main(){
    float numero;

    printf("Digite um número: \n");
    scanf("%f", &numero);

    if(numero > 0){
        printf("O %.0f é PAR", numero);
    }else if (numero < 0){
        printf("O %.0f é ÍMPAR", numero);
    }else{
        printf("É NULO");
    }
    return 0;
}