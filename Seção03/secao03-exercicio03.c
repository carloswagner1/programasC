#include <stdio.h>

int main(){
	//Declaração de variáveis
	int QuantidadeMinima, QuantidadeMaxima;
	float EstoqueMedio;

	//Entradas
	printf("Informe a quantidade mínima: ");
	scanf("%d", &QuantidadeMinima);

	printf("Informa a quantidade máxima: ");
	scanf("%d", &QuantidadeMaxima);

	//Processamento
	EstoqueMedio = (QuantidadeMinima + QuantidadeMaxima) / 2;

	//Saída
	printf("O estoque médio é %.2f", EstoqueMedio);


}
