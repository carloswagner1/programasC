#include <stdio.h>
// std = Standart (Padrão)
// io - input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	int num1, num2, soma;

	//Entradas
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	//Processamento
	soma = num1 + num2;

	//Saída
	printf("O resultado da soma é %d" , soma);

}
