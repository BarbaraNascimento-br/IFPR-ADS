#include <stdio.h>
#include <math.h>

int main(){
    int i = 1;
    int quadrado, cubo;

    while (i <= 10){
        quadrado = pow(i, 2);
        cubo  = pow(i, 3);
        printf("---------------------------------\n9");
        printf("O número : %d\nSeu Quadrado : %d\nSeu cubo : %d\n", i,quadrado, cubo);
        i++;
    }
    
}