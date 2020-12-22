#include <stdio.h>

int main(){
	int num, soma = 0;

	printf("Informe um número: ");
	scanf("%d", &num);

	while(num != 0){
		soma = soma + num;
		printf("Informe um número: ");
		scanf("%d", &num);
	}
	printf("A soma é %d", soma);

	return 0;
}
