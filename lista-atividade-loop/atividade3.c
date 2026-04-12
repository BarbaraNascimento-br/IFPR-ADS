#include <stdio.h>

int main(){
    int somaDosImpores = 0;
    int i = 1;

    while (i <= 100) {
        somaDosImpores = somaDosImpores + i;
        i = i + 2;
    }
    printf("A soma dos ímpares: %d", somaDosImpores);
    return 0;
    
}