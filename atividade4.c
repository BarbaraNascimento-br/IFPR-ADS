#include <stdio.h>

int main(){
	int impares, i;
	float soma = 0, a;
	
	for( impares = -1, i = 1; i <= 25; i++){
		impares+=2;
		a = (float) impares / i;
		printf("%d / %d\n", impares, i);
		soma = soma + a;
	} 
	printf("A soma é : %.5f", soma);
	return 0;
}

