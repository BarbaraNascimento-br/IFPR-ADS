#include <stdio.h>
#include <math.h>

 double mediaHarmonica(double a, double b, double c, double d){
    double calculoDaMedia;
    calculoDaMedia = 4/ ( pow(a,-1), pow(b,-1), pow(c,-1), pow(d,-1));
    printf("A média harmônica (MH) : %.1lf ", calculoDaMedia);
    return calculoDaMedia;
}

double mediaQuadratica(double a, double b, double c, double d){
    double calculoDaMedia;
    calculoDaMedia = sqrt((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4);
    printf("A média quadrática : %.1lf", calculoDaMedia);
    return calculoDaMedia;
}

int main(){
    double num1, num2, num3, num4;
    printf("Digite o 1º valor:");
    scanf("%lf", &num1);
    printf("Digite o 2º valor:");
    scanf("%lf", &num2);
    printf("Digite o 3º valor:");
    scanf("%lf", &num3);
    printf("Digite o 4º valor:");
    scanf("%lf", &num4);

    mediaHarmonica(num1, num2, num3, num4);
    mediaQuadratica(num1, num2, num3, num4);

    return 0;
}

