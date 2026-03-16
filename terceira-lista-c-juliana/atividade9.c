#include <stdio.h>
#include <math.h>

void teoriaDaBarbara( long int a, long int b){
    long int multi;
    printf("Valore iniciais: %ld\t%ld\n", a, b);
    //Vamos para a lógica que deu muitoooo trabalho
    multi = a * b;
    a = (multi * a)/ pow(a,2);
    b = (multi * b)/ pow(b,2);
    printf("Valores trocados: %ld\t%ld", a, b);
    //obs.: essa lógica só funciona até o 499
}

int main(){
    long int valor1, valor2;
    printf("Digite o primeiro valor:\n");
    scanf("%ld", &valor1);
    printf("Digite o segundo valor:\n");
    scanf("%ld", &valor2);
    teoriaDaBarbara(valor1, valor2);
    return 0;
}