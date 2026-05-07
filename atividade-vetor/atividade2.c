#include <stdio.h>

int main(){
    int vetorA[10] = {30,25,26,16,12,4,9,100,24,3}, vetorB[10];

    for(int i = 0; i < 10; i++){
        if(vetorA[i] % 2 == 0){
            vetorB[i] = vetorA[i] * 5;
        } else{
            vetorB[i] = vetorA[i] + 5;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d  ", vetorB[i]);
    }
    
}
