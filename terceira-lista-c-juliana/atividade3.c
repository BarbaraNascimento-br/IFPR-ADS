#include <stdio.h>
#include <math.h>

void arredondamentoDosNumeros(double num){
    printf("baixo/tnormal/talto\n");
    printf("%lf\t%lf\t%lf", floor(num), num, ceil(num));
}

int main(){
    double numeroInformado;

    printf("Digite um número:\n");
    scanf("%lf", &numeroInformado);
    arredondamentoDosNumeros(numeroInformado);
    return 0;
}
