#include <stdio.h>

float tempoDeDownload(int tamanhoDoArquivo, int velocidadeDaConexao){
    float tempoDowloadEmSegundos;
    tempoDowloadEmSegundos = tamanhoDoArquivo / velocidadeDaConexao;
    printf("Tempo de Dowload será : %.3f segundos", tempoDowloadEmSegundos);
    return tempoDowloadEmSegundos;
}
int main(){
    int tamanho, velocidade;
    printf("Digite o tamanho do arquivo: \n");
    scanf("%d", &tamanho);
    printf("Digite a velocidade da conexão: \n");
    scanf("%d", &velocidade);
    tempoDeDownload(tamanho, velocidade);
    return 0;
}