#include <stdio.h>


int main(){
    int vetorA[5] = {2,3,4,5,6,7}, vetorB[5];

    for(int i = 1; i < 5; i++){
        vetorB[i] = vetorA[i] * 2;
    }
    for( int i = 1; i < 5; i++){
        printf("%d ", vetorB[i]);
    }
}