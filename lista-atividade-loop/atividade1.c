#include <stdio.h>

int main(){
    int numero = 1;

    while(numero <= 20){
        printf("-%d\n", numero);
        numero = 1 + numero;
    }
    return 0;
}