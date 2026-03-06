#include <stdio.h>

float gastoTotalComCrpete(float comprimento, float largura, float valorDoCarpetePorMetro){
    
    float areaTotal;
    areaTotal = comprimento * largura;

    float gastoTotal;
    gastoTotal = areaTotal * valorDoCarpetePorMetro;
    printf("O valor gasto será : R$%f.2", gastoTotal);
}

int main(){

    float comprimento, largura, valorDoCarpeteMetro;

    printf("===CUSTO TOTAL - CARPETE===\n");
    printf("Digite o valor do comprimento da sala: \n");
    scanf("%f", &comprimento);
    printf("Digite o valor da largura da sala: \n");
    scanf("%f", &largura);
    printf("Digite o preço do carpete por metro quadrado: \n");
    scanf("%f", &valorDoCarpeteMetro);
    gastoTotalComCrpete(comprimento, largura, valorDoCarpeteMetro);
    return 0;
}

