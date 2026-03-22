#include <stdio.h>
#include <ctype.h>
#include <math.h>


void tabelaImc( char genero, float altura, float massaCorporal){
    genero = toupper(genero);
    float imc;
    
    if (altura < 0 || massaCorporal < 0){
        printf("Valores inválidos");
    }else{
        imc = massaCorporal/pow(altura,2);
        if (genero == 'M'){
            if (imc < 19){
                printf("Abaixo do peso");
            }else if (imc >= 19 && imc < 23.9){
                printf("Normal");
            }else if (imc >= 24 && imc < 28.9){
                printf("Obesidade leve");
            }else if (imc >= 29 && imc < 38.9){
                printf("Obesidade moderada");
            }else if (imc >= 39){
                printf("Obesidade mórbida");
            }else{
                printf("Erro ao informa resultado imc");
            }  
        } else if (genero == 'H'){
             if (imc < 20){
                printf("Abaixo do peso");
            }else if (imc >= 20 && imc < 24.9){
                printf("Normal");
            }else if (imc >= 25 && imc < 29.9){
                printf("Obesidade leve");
            }else if (imc >= 30 && imc < 39.9){
                printf("Obesidade moderada");
            }else if (imc >= 40){
                printf("Obesidade mórbida");
            }else{
                printf("Erro ao informa resultado imc");
            }
        } else{
            printf("Erro");
        }
        
    }
}

int main(){
    float alturaInformada, massaCorporalInformada;
    char genero;

    printf("Digite seu gênero:\n(M ou H)");
    scanf("%c", &genero);

    printf("Digite sua altura:\n(exemplo: 1.62)");
    scanf("%f", &alturaInformada);

    printf("Digite sua massa corpotal:\n(exemplo: 70.0)");
    scanf("%f", &massaCorporalInformada);

    tabelaImc(genero, alturaInformada, massaCorporalInformada);
    return 0;
}