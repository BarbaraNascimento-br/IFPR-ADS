
#include <stdio.h>

int main(){
	float valorMax = -200000000, valorMin = 2000000000, valor, soma = 0, media;
	int c = 0;
	
	for( int i = 1; i<= 5; i++){
		printf("informe o valor:\n");
		scanf("%f", &valor);
		
		if ( valor > 5.9){
			soma = soma + valor;
			c++;
		}
		if( valor < valorMin) valorMin = valor;
		if( valor > valorMax) valorMax = valor;
	}
	media = (float) soma/c;
	
	printf("Valor máximo: %.1f\n", valorMax);
	printf("Valor mínimo: %.1f\n", valorMin);
	printf("A média dos valores maiores que 5.9: %.1f\n", media);
	return 0;
}

