#include <stdio.h>
#include <math.h>
#define TAM 100

void menuOpcoes(){
    printf("============OPÇÕES===========\n");
    printf("1-CADASTRO\n");
    printf("Informe a opção:\n");
}

struct Funcionarios{
    double id;
    char nome[255];
    float salario;
    int grauDeEstudos;
    int quantidadeDelinguas;
    int cargo;
    float indice;
} cadastroFuncionario[100];

int main(){
    int opcao, quantidadeDeCadastros; 

    while (opcao != 0){
        menuOpcoes();
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Quantas pessoas gostaria de cadastrar : \n");
            scanf("%d", &quantidadeDeCadastros);

            if (quantidadeDeCadastros > 0){
                for (int i = 1; i < quantidadeDeCadastros; i++){
                //ID
                cadastroFuncionario[i].id = (double) i;
                //NOME
                printf("Informei o nome do funcionario %d", i);
                scanf("%s", &cadastroFuncionario[i].nome);
                //SALARIO
                printf("Informe o salário do(a) %s", cadastroFuncionario[i].nome);
                scanf("%f", &cadastroFuncionario[i].salario);
                //GRAU DE ESTUDO 
                do{
                   printf("De 1 a 5, qual é o grau de estudo do funcionario %s:\n", cadastroFuncionario[i].nome);
                   scanf("");

                   if(cadastroFuncionario[i].grauDeEstudos < 1 || cadastroFuncionario > 5) printf("Informe um valor valido");
                 
                } while(cadastroFuncionario[i].grauDeEstudos < 1 || cadastroFuncionario > 5);
                // QUANTIDADES DE LINGUAS 
                do{
                   printf("Quantos linguas a funcionario(a) %s fala:\n", cadastroFuncionario[i].nome);
                   scanf("");

                   if(cadastroFuncionario[i].quantidadeDelinguas < 0) printf("Informe um valor valido");
                 
                } while(cadastroFuncionario[i].quantidadeDelinguas < 0);
                //CARGO
                 do{
                   printf("de 1 a 4, Qual é o nível do cargo do(a) %s:\n", cadastroFuncionario[i].nome);
                   scanf("");

                   if(cadastroFuncionario[i].cargo < 1|| cadastroFuncionario[i].cargo > 4)printf("Informe um valor valido");
                 
                } while(cadastroFuncionario[i].cargo < 1 || cadastroFuncionario[i].cargo > 4);
                //INDICE
                do{
                   printf("de 0 a 0,1, Qual é o indice de produtividade do(a) %s:\n", cadastroFuncionario[i].nome);
                   scanf("");

                   if(cadastroFuncionario[i].cargo < 0|| cadastroFuncionario[i].cargo > 0,1)printf("Informe um valor valido");
                 
                } while(cadastroFuncionario[i].cargo < 0|| cadastroFuncionario[i].cargo > 0,1);

                printf("Cadastro ralizado com sucesso!");
            }
            }
            
            
            break;
        
        default:
            break;
        }

    }
    

}