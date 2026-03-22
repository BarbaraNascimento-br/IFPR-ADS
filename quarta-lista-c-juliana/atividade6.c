#include <stdio.h>

float aumentoSalarial(float salario){
    float salarioAtualizado;

    if (salario >= 0 && salario <= 990.00){
        salarioAtualizado = salario + (salario * 0.2);
        printf("Reajuste salarial:\n %.2f ---> %.2f", salario, salarioAtualizado);
        return salarioAtualizado;
    }else if (salario >= 990.01 && salario <= 1480.00){
        salarioAtualizado = salario + (salario * 0.1);
        printf("Reajuste salarial:\n %.2f ---> %.2f", salario, salarioAtualizado);
        return salarioAtualizado;
    }else if (salario >= 1480.01 && salario <= 2000.00){
        salarioAtualizado = salario + (salario * 0.05);
        printf("Reajuste salarial:\n %.2f ---> %.2f", salario, salarioAtualizado);
        return salarioAtualizado;
    } else if (salario >= 2000.01){
        printf("Sem reajuste salarial!");
        return salario;
    }else{
        printf("Valor inválido. Tente novamente");
        return salario;
    }
}

int main(){
    float salarioInformado;

    printf("Digite o seu salário:\n");
    scanf("%f", &salarioInformado);

    aumentoSalarial(salarioInformado);
    return 0;


}