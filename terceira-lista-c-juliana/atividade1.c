#include <stdio.h>
#include <math.h>

double raizQuadrada (double num){
    double raiz;
    raiz = sqrt(num);
    printf("--------------------------------------\n");
    printf("A raiz quadrada do número %.1lf é %.1lf \n", num, raiz);
     printf("-------------------------------------\n");
    return raiz;
}

int main(){
    double numeroInformado;
    printf("Digite o número:\n");
    scanf("%lf", &numeroInformado);
    raizQuadrada(numeroInformado);
    return 0;
}
