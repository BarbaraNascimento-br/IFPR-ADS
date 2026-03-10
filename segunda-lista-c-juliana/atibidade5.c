#include <stdio.h>

float troco(float valorProduto, float valorPago){
    float troco;
    if (valorPago == valorProduto){
        printf("Não precisa de troco!");
    } else if (valorPago < valorProduto){
        printf("Valor menor que o valor do produto!");
    } else {
        troco = valorPago - valorProduto;  
        printf("Troco: R$%.2f", troco);  
    }
    
    return troco;
}

int main(){
    float valorPago, valorProduto;

    printf("Digite o valor do produto:\n");
    scanf("%f", &valorProduto);
    printf("Digite o valor pago:\n");
    scanf("%f", &valorPago);

    troco(valorProduto, valorPago);
    return 0;
}
