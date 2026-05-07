#include <stdio.h>
#define TAM 20

int main(){
   int vetor[TAM], menor = __INT_MAX__, posicao;

   for (int i = 0; i < TAM; i++){
    do{
        printf("Informe o valor de V[%d]:\n", i);
        scanf("%d", &vetor[TAM]);
    } while (vetor[TAM] < 0);
    
    if(vetor[TAM] < menor){
		menor = vetor[TAM];
		posicao = i;
	}
    
   }
   printf("O maior número é %d que está na posição %d\n", menor, posicao);
   
}

