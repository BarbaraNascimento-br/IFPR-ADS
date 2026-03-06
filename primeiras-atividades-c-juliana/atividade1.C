#include <stdio.h>

//Função de soma 
int somaDosNumeros(int num1, int num2){
        int soma;
        soma = num1 + num2;
        printf("%d + %d = %d \n", num1, num2, soma);
        return soma ;
    }
//Função de subtração
int subtracaoDosNumeros(int num1, int num2){
    int subtracao;
    subtracao = num1 - num2;
    printf("%d - %d = %d \n", num1, num2,subtracao);
    return subtracao;
}
// Função de Multiplicação 
int multiplicacaoDosNumeros(int num1, int num2){
    int multi;
    multi = num1 * num2;
    printf("%d x %d = %d \n", num1, num2, multi);
    return multi;
}
//Função de Divisão
float divisaoDosNumeros( int num1, int num2){
    float div;
    if (num2 == 0){
        printf("Error: Não existe divisão por zero\n");
    }else{
        div = num1/ num2;
        printf("%d / %d = %f \n", num1, num2, div);
        return div;
    }   
}

//Menu
int main(){
    int numero1, numero2;

    int opcao = 0;

    while(opcao != 5){

        printf("======OPERAÇÕES BÁSICAS=====\n");
        printf("Escolha uma opção\n");
        printf("1-soma\n2-subtração\n3-multiplicação\n4-divisão\n5-sair\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1 : 
            printf("Digite o primeiro número:\n");
            scanf("%d", &numero1);
            printf("Digite o segundo número:\n");
            scanf("%d", &numero2);
            somaDosNumeros(numero1, numero2);
            break;
        case 2: 
            printf("Digite o primeiro número:\n");
            scanf("%d", &numero1);
            printf("Digite o segundo número:\n");
            scanf("%d", &numero2);
            subtracaoDosNumeros(numero1, numero2);
            break;
        case 3 :
            printf("Digite o primeiro número:\n");
            scanf("%d", &numero1);
            printf("Digite o segundo número:\n");
            scanf("%d", &numero2);
            multiplicacaoDosNumeros(numero1,numero2);
            break;
        case 4: 
            printf("Digite o primeiro número:\n");
            scanf("%d", &numero1);
            printf("Digite o segundo número:\n");
            scanf("%d", &numero2);
            divisaoDosNumeros(numero1, numero2);
            break;
        case 5 : 
            printf("Saindo...\n");

        default:
            printf("Escolha uma opção válida.\n");
            break;
        }
    }
}