#include <stdio.h>

int main(){

	//Declaração de Variáveis
	float Altura, PesoIdeal;

	//Entrada
	printf("Informe a sua altura: ");
	scanf("%f", &Altura);

	//Processamento
	PesoIdeal = (Altura * 72.7) - 58;

	//Saída
	printf("Seu peso ideal é %.2f kg", PesoIdeal);

}
