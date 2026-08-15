#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int matricula;
    float nota1;
    float nota2;
    float media;
    int faltas;
} Aluno;


void menu(){
    printf("--- MENU PRINCIPAL ---\n");
    printf("1. Opção 1: Inserir alunos\n");
    printf("2. Opção 2: Exibir alunos\n");
    printf("3. Opção 3: Salvar dados\n");
    printf("4. Opção 4: Carregar dados\n");
    printf("5. Opção 5: Sair do programa\n");
    printf("DIGITE SUA OPÇÃO [1-5]:");
}

int main(){

    Aluno turma[40];
    int opcao, alunosTurma;

    menu();
    scanf("%d", &opcao);

    while (opcao != 5){
         switch (opcao){
            case 1:
                printf("Quantos alunos você vai cadastrar:\n[máximo é 40 alunos]");
                scanf("%d", &alunosTurma);

                for(int i = 0; i <= alunosTurma;i++){
                    printf("Informe o nome do aluno %d\n", i+1);
                    fgets(turma[i].nome, 100, stdin);
                    getchar();
                    do{
                        printf("Informe o número da matricula: \n");
                        scanf("%d", turma[i].matricula);
                        getchar();

                        if(turma[i].matricula < 0) printf("tente novamente");

                    } while (turma[i].matricula < 0);
                    

                }
                
                break;
            case 2:
                /* code */
                break;
            case 3:
                /* code */
                break;
            case 4:
                /* code */
                break;
            case 5:
                printf("Saindo...");
                break;
            
            default:
                break;
            }
    }
    
}