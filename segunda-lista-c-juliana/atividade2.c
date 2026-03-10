#include <stdio.h>

int antecessorInteiroSucessor(int numero){
    int antecessor, sucessor;
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("ANTECESSOR: %d\nSUCESSOR: %d", antecessor, sucessor);
    return 0;
}

int main(){
     int numeroInteiro;

     printf("===ANTECESSOR E SUCESSOR===\n");
     printf("Digite um numero inteiro:");
     scanf("%d", &numeroInteiro);

    antecessorInteiroSucessor(numeroInteiro);
    return 0;
     
}
