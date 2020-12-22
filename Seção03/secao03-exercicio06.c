#include <stdio.h>

int main (){

	//Declaração de variáveis
	int HorasTrabalhadas;
	float ValorHora, Salario;

	//Entradas
	printf("Informe o valor da hora: ");
	scanf("%f", &ValorHora);
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%d", &HorasTrabalhadas);


	//Processamento
	Salario = HorasTrabalhadas * ValorHora;

	//Saída
	printf("o salário é R$ %.2f", Salario);

}
