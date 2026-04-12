#include <stdio.h>

int main(){
    int numero = 15;

    while (numero >= 0){
        printf("-%d\n", numero);
        numero = numero - 1;
    }
    return 0;
    
}