#include <stdio.h>

int main(){
	int c, f, somaA = 0, somaB = 0, somaC = 0, somaD;
	int numPares, numImpares, numPositivos, numImparesDivisiveis;
	
	printf("Informe o valor inicial: \n");
	scanf("%d", &c);
	printf("Informe o valor final: \n");
	scanf("%d", &f);
	
	for( int i = c;i <= f; i++){
		
		if( i > 0) {
			numPositivos++;
			somaA = somaA + i;
			}
		if(i % 2 == 0) {
			numPares++;
			somaB =  somaB + i;
			}
		if(i % 2 != 0) {
			numImpares++;
			somaC = somaC + i;
			}
		if(i % 3 == 0 && i % 2 != 0) {
			numImparesDivisiveis++;
			somaD = somaD + i;
			}
			
	}
	
	
	printf(" a quantidade de números inteiros e positivos + média : %d e %f\n", numPositivos, (float) somaA/numPositivos);
	printf(" a quantidade de números pares + média: %d e %f\n", numPares, (float) somaB/numPares);
	printf(" a quantidade de números ímpares + média: %d e %f\n", numImpares, (float) somaC/numImpares);
	printf(" a quantidade de números ímpares e divisíveis por 3 + media: %d e % f\n", numImparesDivisiveis, (float) somaD/numImparesDivisiveis);
	
	return 0;
}

