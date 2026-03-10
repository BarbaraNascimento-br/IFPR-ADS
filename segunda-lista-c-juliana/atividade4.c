#include <stdio.h>

float areaDoRetangulo( float a, float b){
    float area;
    area = a * b;
    printf("A área do retângulo é %.2f", area);
    return area;

}

int main(){
    float altura, base;

    printf("Digite o valor da base:\n");
    scanf("%f", &base);
    printf("Digite o valor da altura:\n");
    scanf("%f", &altura);


    areaDoRetangulo(base, altura);
    
    return 0;
}
