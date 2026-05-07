#include <stdio.h>
#define TAM 5

int main(){
    int vetorA[TAM], vetorB[TAM];

    
    for(int i = 0; i < TAM; i++){
		printf("Informe um valor[%d]\n", i);
        scanf("%d", &vetorA[i]);
	}

    for (int i = 0; i < TAM; i++){
            vetorB[i] = vetorA[TAM - i - 1];
    }
        
    
    for (int i = 0; i < TAM; i++){
        printf("%d ", vetorA[i]);
        
    }
    
    for (int i = 0; i < TAM; i++){
        printf("  %d ", vetorB[i]); 
      
    }
    
   
}
