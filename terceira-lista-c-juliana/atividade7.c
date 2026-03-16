#include <stdio.h>
#include <math.h>

void somaDosValoreDeUmInteiro(int numeroInt){
    int milhar, centena, dezena, unidade;
    int restoDaMilhar, restoDaCetena, restoDaDezena;
    int soma;
    
    //Vamos para a lógica
    milhar = numeroInt / 1000;
    restoDaMilhar =  numeroInt % 1000;
    centena = restoDaMilhar / 100;
    restoDaCetena = restoDaMilhar % 100;
    dezena = restoDaCetena / 10;
    restoDaDezena = restoDaCetena % 10;
    unidade = restoDaDezena / 1;
    soma = milhar + centena + dezena + unidade;
    printf("%d a soma dos dígitos será : %d", numeroInt, soma);


}

int main(){
    int numeroInteiroInformado;
    printf("Digite um número inteiro e veja a soma dos dígitos: \n");
    scanf("%d", &numeroInteiroInformado);
    somaDosValoreDeUmInteiro(numeroInteiroInformado);
}