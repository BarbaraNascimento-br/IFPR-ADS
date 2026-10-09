#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int dado;
    struct elemento *prox;
};
typedef struct elemento *Lista;

// Insere e na posição correta (ordem crescente). Retorna a lista atualizada
Lista insereLista(Lista l, int e)
{
    Lista p, ant, novo;

    novo = malloc(sizeof(struct elemento));
    if (novo == NULL) {
        printf("Erro: sem memoria disponivel.\n");
        return l;
    }
    novo->dado = e;

    p = l;
    ant = NULL;                       
    while (p != NULL && p->dado < e) {
        ant = p;
        p = p->prox;
    }

    if (ant == NULL)                  
        l = novo;
    else                            
        ant->prox = novo;

    novo->prox = p;
    return l;
}

// Retira a primeira ocorrencia de e
Lista retiraLista(Lista l, int e, int *removido)
{
    Lista p = l, ant = NULL;

    while (p != NULL && p->dado < e) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL || p->dado != e) {  
        *removido = 0;
        return l;
    }

    if (ant == NULL)                  
        l = p->prox;
    else
        ant->prox = p->prox;

    free(p);
    *removido = 1;
    return l;
}

//Retorna o endereco do elemento ou NULL se nao existir
Lista buscaLista(Lista l, int e)
{
    Lista p = l;

    while (p != NULL && p->dado < e)
        p = p->prox;

    if (p != NULL && p->dado == e)
        return p;
    return NULL;
}

void imprimeLista(Lista l)
{
    Lista p;

    if (l == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista: ");
    for (p = l; p != NULL; p = p->prox)
        printf("%d ", p->dado);
    printf("\n");
}

int contaLista(Lista l)
{
    int n = 0;
    Lista p;

    for (p = l; p != NULL; p = p->prox)
        n++;
    return n;
}

// Libera toda a memoria alocada antes de encerrar o programa
void liberaLista(Lista l)
{
    Lista p;

    while (l != NULL) {
        p = l;
        l = l->prox;
        free(p);
    }
}

int main(void)
{
    Lista l = NULL, achado;
    int opcao, valor, removido;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Retirar elemento\n");
        printf("3 - Buscar elemento\n");
        printf("4 - Imprimir lista\n");
        printf("5 - Contar elementos\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Valor a inserir: ");
            scanf("%d", &valor);
            l = insereLista(l, valor);
            break;
        case 2:
            printf("Valor a retirar: ");
            scanf("%d", &valor);
            l = retiraLista(l, valor, &removido);
            if (removido)
                printf("Elemento %d removido.\n", valor);
            else
                printf("Elemento %d nao esta na lista.\n", valor);
            break;
        case 3:
            printf("Valor a buscar: ");
            scanf("%d", &valor);
            achado = buscaLista(l, valor);
            if (achado != NULL)
                printf("Elemento %d encontrado no endereco %p\n", valor, (void *)achado);
            else
                printf("Elemento %d nao encontrado (NULL).\n", valor);
            break;
        case 4:
            imprimeLista(l);
            break;
        case 5:
            printf("Numero de elementos: %d\n", contaLista(l));
            break;
        case 0:
            printf("Encerrando...\n");
            break;
        default:
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    liberaLista(l);
    return 0;
}