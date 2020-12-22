#include <stdio.h>

int main(){
	int n, i;
	float H = 0;
	
	printf("Informe um número: ");
	scanf("%d", &n);
	
	for(i = n; i >= 1; i--){
		H = H + 1.0/i;
	}
	
	printf("A soma é igual a %.2f\n", H);
	
	return 0;
}
