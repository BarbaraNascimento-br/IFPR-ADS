#include <stdio.h>

int dobroDoNumeroInteiro(int numeroInteiro){
    int resultado;
    resultado = numeroInteiro * numeroInteiro;
    printf("O dobro do número %d é %d!", numeroInteiro, resultado);
    return resultado;
}

int main(){
    int numero;
    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);
    dobroDoNumeroInteiro(numero);
    return 0;
}
