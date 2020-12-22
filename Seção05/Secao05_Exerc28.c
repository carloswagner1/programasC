#include <stdio.h>

int main(){
	int n, fat;
	float E;
	
	printf("Informe um número: ");
	scanf("%d", &n);
	
	E = 1;	
	for(int i = n + 1; i > 1; i--){
		for(fat = 1; i > 1; i = i - 1){
			fat = fat*i;
			E = E + 1.0/fat;
		}
	}
	printf("A soma = %.2f\n", E);
	return 0;
}

