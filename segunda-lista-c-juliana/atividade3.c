#include <stdio.h>

int mediaDosNumeros(int somaDosNumeros){
    int media;
    media = somaDosNumeros/ 4;
    printf("A média dos números : %d", media);
    return media;
}

int main(){
    int quantidade = 0;
    int soma = 0;
    int numero;

    while (quantidade != 4)
    {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        soma += numero;
        quantidade ++;
        

    }
    mediaDosNumeros(soma);
    
}