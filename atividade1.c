#include <stdio.h>

int main(){
	int n;
	
	printf("Informe n:\nobs.: n tem que ser inteiro\n");
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i++){
		printf("%d x %d = %d\n", n, i, (i*n));
	}
	return 0;
}

