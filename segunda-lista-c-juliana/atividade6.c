#include <stdio.h>

float valorFinal (float valorDoProduto, int formaDePagamento){
    float valorComDesconto, valorComAcrescimo;
    if (formaDePagamento == 1 ){
        valorComDesconto = valorDoProduto - (valorDoProduto * 0.1);
        printf("Valor atualizado com desconto de 10%% : R$%.1f", valorComDesconto);
        return valorComDesconto;
    }else if (formaDePagamento == 2 ){
        valorComAcrescimo = valorDoProduto + (valorDoProduto * 0.05);
        printf("O valor atualizado com acrescimo de 5%% : R$%.1f", valorComAcrescimo);
        return valorComAcrescimo;
    }else{
        printf("Nenhuma forma de pagamento informada.");
        return valorDoProduto;
    }
}

int main(){
    float valorProduto;
    int formaPagamento;

    printf("Informe o valor do produto:\n");
    scanf("%f", &valorProduto);
    printf("Informe a forma de pagamento:\n [1 - PIX]\n[2 - CARTÃO]\n");
    scanf("%d", &formaPagamento);
    valorFinal(valorProduto, formaPagamento);
    return 0;

}
