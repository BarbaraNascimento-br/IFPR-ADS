#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int numerosPar = 0, numeroImpares = 0;

    printf("Digite um número inteiro:\n");
    scanf("%d", &n);

    while (i <= n){
        if (i % 2 == 0){
            numerosPar = numerosPar + i;
        }else{
            numeroImpares = numeroImpares + i;
        }
        i++;
        
    }
    printf("Soma dos pares: %d\n", numerosPar);
    printf("Soma dos ímpares: %d", numeroImpares);
    
    return 0;
}
