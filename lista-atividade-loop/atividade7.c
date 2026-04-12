#include <stdio.h>

int main(){
    int termos = 20;
    int razao = 3;
    int i = 0, n = 0;

    while (i < termos){
        printf("%d,", n);
        n = n + razao;
        i++;

    }
    return 0;
    

}