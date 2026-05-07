#include <stdio.h>

int main(){
    float vetorNotas[20], soma = 0, media;
    int contagem;

    for (int i = 0; i < 20; i++){
        printf("Informe a nota do aluno %d : " , i);
        scanf("%f", &vetorNotas[i]);
    }
    
    for(int i = 0; i < 20; i++){
        soma = soma + vetorNotas[i];
    }
    media = (float) soma/20;

    for(int i = 0; i < 20; i++){
        if( vetorNotas[i] > media) contagem++;
    }

    printf("Média da turma: %.2f\n", media);
    printf("Resultado da contagem: %d", contagem);
}
