#include <stdio.h>

int formaDoTriangulo(int a , int b, int c){
    if (a+b>c && a+c>b && b+c>a){
        if (a==b && a==c && b==c){
            printf("Esse triângulo é Equilátero");
        } else if ((a==b) || (a==c) || (b==c)){
            printf("Esse triângulo é Isósceles");
        }else{
            printf("Esse triângulo é Escaleno");
        }
    }else{
        printf("Esse triânhulo não existe. Tente novamente.");
    }
    return 0;
}

int main(){
    int a, b, c;

    printf("Digite o primeiro lado do triângulo:\n");
    scanf("%d", &a);

    printf("Digite o segundo lado do triângulo:\n");
    scanf("%d", &b);

    printf("Digite o terceira lado do triângulo:\n");
    scanf("%d", &c);

    formaDoTriangulo(a, b, c);
    return 0;


}