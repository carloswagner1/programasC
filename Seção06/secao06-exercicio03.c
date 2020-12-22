#include <stdio.h>

int main (){

	//Declaração de Variáveis
	int numero, p = 0, i = 0;

	//Entradas
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0) {
		p = numero;
		printf("O número %d é par.", p);
	}else{
		i = numero;
		printf("O número %d é impar.", i);
	}
}
