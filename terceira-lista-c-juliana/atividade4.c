#include <stdio.h>
#include <math.h>

float mediaDosNumeros(float soma){
    float media;
    media = (float)(soma)/3;
    printf("A média dos números: %.1f", media);
    return media;
}

int main(){
    int quantidade = 0;
    float numeroInformado;
    float soma = 0;

    while(quantidade != 3 ){
        printf("Digite um número:");
        scanf("%f", &numeroInformado);
        soma += numeroInformado;
        quantidade ++;
    }
    mediaDosNumeros(soma);
    return 0;
}
