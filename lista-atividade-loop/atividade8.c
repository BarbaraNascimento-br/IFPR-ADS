#include <stdio.h>

int main(){
    int termos = 10;
    int razao = -2;
    int i = 0, n = -2;

    while (i < termos){
        printf("%d,", n);
        n = n * razao;
        i++;

    }
    return 0;
    

}