#include <stdio.h>
#include <math.h>

void segundosParaMinutosParaHoras(int segundos){
    int valorMinutos = 0; 
    int valorHoras = 0;
    int segundosNovos;

    if (segundos < 60){
        printf("%d:%d:%d", valorHoras, valorMinutos,segundos);
    }else if ( segundos >= 60 && segundos < 3600){
        valorMinutos = segundos / 60;
        segundosNovos = segundos % 60;
        printf("%ds ---> %d:%d:%d",segundos, valorHoras, valorMinutos, segundosNovos);
    }else{
        valorHoras = segundos / 3600;
        valorMinutos = (segundos % 3600) / 60;
        segundosNovos = ((segundos % 3600) % 60);
        printf("%ds ---> %d:%d:%d", segundos, valorHoras, valorMinutos, segundosNovos);
    }
}
int main(){
    int valorSegundosInformado;
    printf("Digite o valor em segundos:\n");
    scanf("%d", &valorSegundosInformado);
    segundosParaMinutosParaHoras(valorSegundosInformado);
    return 0;
}
