#include <stdio.h>

//Real para dólar 
float realParaDolar(float reais, float cotacao){

    float dolares = reais/ cotacao;
    printf("R$ %f --> $ %f", reais, dolares);
    return dolares;
}
// Dólar para Real
float dolarParaReal(float dolares, float cotacao){
     float reais =  dolares * cotacao;
    printf("$ %f --> R$ %f", dolares, reais);
    return reais;
}

int main(){
    float dolarAtual, moedaNorteAmericana, moedaBrasileira;
    
    int opcao = 0;

    while (opcao != 3)
    {
        printf("=====Seja Bem-Vindo ao conversor de moedas=====\n");
        printf("Escolha umas das opções:\n ");
        printf("1- DÓLAR PARA REAL\n 2- REAL PARA DÓLAR\n 3-SAIR\n");
        scanf("%d\n", &opcao);


        switch (opcao)
        {
        case 1:
            printf("Valor da cotação atual:\n");
            scanf("%f\n", &dolarAtual);
            printf("Valor em Reais: \n");
            scanf("%f\n", &moedaBrasileira);
            realParaDolar(moedaBrasileira, dolarAtual);
            break;
        case 2 :
            printf("Valor da cotação atual:\n");
            scanf("%f\n", &dolarAtual);
            printf("Valor em Dólar: \n");
            scanf("%f\n", &moedaNorteAmericana);
            dolarParaReal(moedaNorteAmericana, dolarAtual);
            break;
        case 3 : 
            printf("SAINDO...");
            break;

        default:
            printf("Escolha uma opção válida.");
            break;
        }
    }
    
}