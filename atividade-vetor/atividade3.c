#include <stdio.h>


int main(){
    int vetorX[3], vetorY[3] = {2,3,4};
    int escalar = 0;

    for(int i = 0; i < 3; i++){
        printf("Informe uma valor inteiro :\n ");
        scanf("%d", &vetorX[i]);
    }
    for (int i = 0; i < 3; i++){
        escalar = escalar + (vetorX[i] * vetorY[i]);
    }
    printf("O produto escalar é: %d", escalar);
    
}
