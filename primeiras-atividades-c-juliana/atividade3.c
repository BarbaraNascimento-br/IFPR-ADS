#include <stdio.h>

float calculoComissao(int totalDeVendas, char nome[50]){
    float comissao;
    comissao = (totalDeVendas * 10) / 100;
    printf("A comissão do(a) %s é %f", nome, comissao);
}

int main(){

    char nomeDoColaborador[50];
    int vendas;

    printf("===COMISSÃO===\n");
    printf("Digite o nome do colaborador:\n");
    scanf("%s", nomeDoColaborador);
    printf("Digite a quantidade de vendas do(a) colaborador(a) %s :\n", nomeDoColaborador);
    scanf("%d", &vendas);
    calculoComissao(vendas, nomeDoColaborador);
    return 0;
}