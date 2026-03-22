#include <stdio.h>
#include <ctype.h>

int  main(){
    char letra;

    printf("[ S ]\n[ C ]\n[ D ]\n[ V ]\nEscolha seu estado civil:\n");
    scanf("%c", &letra);

    letra = toupper(letra);

    if (letra == "S"){
         printf("Você é solteiro(a)");
    } else if (letra == "C"){
        printf("Você é casado(a)");
    } else if (letra == "D"){
      printf("Você é divorciado(a)");
    } else if (letra == "V"){
        printf("Você é viúvo(a)");
    }else{
        printf("Escolha uma opção válida!")
    }
    
    return 0;
}