#include <stdio.h>

int main(){
	//variáveis
	int numero, maior = 0;

	//entradas
	printf("Informe o número: ");
	scanf("%d", &numero);

	//processamento
	while(numero != 0){
		if(numero > maior){
			maior = numero;
		}
		//entradas
		printf("Informe o número: ");
		scanf("%d", &numero);
	}
	printf("O maior numero é %d", maior);
}

