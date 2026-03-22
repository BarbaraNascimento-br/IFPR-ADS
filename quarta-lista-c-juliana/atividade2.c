#include <stdio.h>
#include <math.h>

//2) Faça um programa para ler um número e imprimir se: 'é múltiplo de 3' ou 'não é múltiplo de 3'.

int main(){
    int numeroInformado;
    printf("Digite um número:\n");
    scanf("%d", &numeroInformado);

    if (numeroInformado % 3 == 0){
        printf("O %d é múltiplo de 3.", numeroInformado);
    } else{
        printf("Não é múltiplo de 3.");
    }

    return 0;
}