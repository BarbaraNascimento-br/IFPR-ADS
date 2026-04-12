#include <stdio.h>

int main(){
    int i = 1;
    int n = 6;
    int mult;

    while (i <= 10){
        mult = i * n;
        printf("|%d x %d = %d|\n", n, i, mult);
        i++;
    }
    return 0;
    
}