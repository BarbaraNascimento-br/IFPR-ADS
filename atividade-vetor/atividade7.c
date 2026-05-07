#include <stdio.h>
#define TAM 5

int main(){
   int vetor[TAM], menor = __INT_MAX__, maior = 0, posicaoMaior, posicaoMenor;

   for (int i = 0; i < TAM; i++){
    do{
        printf("Informe o valor de V[%d]:\n", i);
        scanf("%d", &vetor[TAM]);
    } while (vetor[TAM] < 0);
    
    if(vetor[TAM] < menor){
		menor = vetor[TAM];
		posicaoMenor = i;
	}
    if(vetor[TAM] > maior){
        maior = vetor[TAM];
        posicaoMaior = i;
    }
    
   }
   printf("O menor número é %d que está na posição %d\n", menor, posicaoMenor);
   printf("O maior número é %d que está na posição %d\n", menor, posicaoMaior);
   
}

