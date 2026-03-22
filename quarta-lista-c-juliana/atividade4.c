#include <stdio.h>
#include <math.h>

//4) Faça um programa para ler um número real e mostrar a raiz quadrada do número caso
//ele seja positivo e o número elevado ao cubo caso ele seja negativo.

int main(){
    int numeroInformado;

    printf("Digite um número:\n");
    scanf("%d", &numeroInformado);

    if (numeroInformado > 0){
        int raizQuadrada = sqrt(numeroInformado);
        printf("A raiz quadrada do %d é %d", numeroInformado, raizQuadrada);
    } else if (numeroInformado < 0){
        int elevadoAoCubo = pow(numeroInformado, 3);
        printf("O %d elevado ao cubo é %d", numeroInformado, elevadoAoCubo);
    }else{
        printf("Esse número é nulo.");
    }
    return 0;
    
}
