#include <stdio.h>

int main(){
    int numeroInformado;

    printf("Digite um número inteiro:\n");
    scanf("%d", &numeroInformado);

    if (numeroInformado > 10 && numeroInformado < 100){
        printf("Número está entre 10 e 100 – intervalo permitido");
    }else{
        printf("intervalo não permitido");
    }
}


