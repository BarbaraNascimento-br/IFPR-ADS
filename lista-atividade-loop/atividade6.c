#include <stdio.h>

int main(){
    int num, media;
    int somaDosNumeros = 0;
    int i = 0;

    while (i < 15){
        printf("Digite um número:\n");
        scanf("%d", &num);
        if (num > 10){
            somaDosNumeros = num + somaDosNumeros;
        }
        i++;
    }
    media = somaDosNumeros / i;
    printf("A média é %d", media);
}