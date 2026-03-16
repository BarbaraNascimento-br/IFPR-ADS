#include <stdio.h>
#include <math.h>

void quadradoAndCubo(double num){
    double raizQuadrada, raizCubica;
    raizQuadrada =  pow(num, 2);
    raizCubica = pow(num, 3);

    printf("número\tquadrado\tcubo\n");
    printf("%.0lf\t%.0lf\t\t%.0lf", num,raizQuadrada, raizCubica);
}

int main(){
    double numeroInformado;
    printf("Digite um número:\n");
    scanf("%lf", &numeroInformado);
    quadradoAndCubo(numeroInformado);
    return 0;
}
