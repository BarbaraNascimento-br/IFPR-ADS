#include <stdio.h>
#include <string.h>

#define MAX_LIST 10
#define MAX_CHAR 20

//Tipo
typedef char Lista[MAX_LIST][MAX_CHAR];



//Função menu
void menu(){
    printf("===========================\n");
    printf("1-INSERIR\n2-RETIRAR\n3-CONTAR ITENS\n4-EXIBIR TODOS OS INTENS\n");
    printf("===========================\n");
    printf("Escolha uma opção:\n ");
}
//Função que cria a lista ( o sistema que cria, não o usuario)
void criarLista(Lista lista){
    for(int i = 0; i < MAX_LIST ; i++) lista[i][0] = '\0';
}

// Função para inserir os itens na lista 
void inserirItens(Lista lista, char *item){
    
}


int main(){
    // Variavel lista
    Lista listaDeItens;
    criarLista(listaDeItens);

}