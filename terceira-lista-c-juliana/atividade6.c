#include <stdio.h>
#include <math.h>

void compraParcelada(double valorDeCompra){
    double valorDasPrestacoes;
    int valorDeprestacoesSemJuros = 5;
    valorDasPrestacoes = valorDeCompra / valorDeprestacoesSemJuros;
    printf("---------------------------\n");
    printf("%d X R$%.2lf = R$%.2lf \n", valorDeprestacoesSemJuros, valorDasPrestacoes, valorDeCompra );
    printf("---------------------------\n");
}

int main(){
    double valorDeCompraInformado;
    printf("Digite o valor da compra:\n");
    scanf("%lf", &valorDeCompraInformado);
    compraParcelada(valorDeCompraInformado);
    return 0;
}