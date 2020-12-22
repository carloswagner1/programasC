#include <stdio.h>

int main(){
	int num, soma = 0;

	for(int i = 0; i < 5; i++){
		printf("Informe um número: ");
		scanf("%d", &num);
		soma = soma + num;
	}

	printf("A soma é %d", soma);

	return 0;
}
