#include <stdio.h>

int main (){
	//Declaração de variáveis
	int CodFunc, HorasTrabalhadas, Sobrejornada = 0, HorasNormais;
	float Salario, HorasExtras;

	//Entradas
	printf("Insira o código do funcionário: ");
	scanf("%d", &CodFunc);
	printf("Insira o número de horas trabalhadas: ");
	scanf("%d", &HorasTrabalhadas);

	//Processamentos
	if(HorasTrabalhadas > 50){
		Sobrejornada = (HorasTrabalhadas - 50);
		HorasNormais = (HorasTrabalhadas - Sobrejornada);

	}if (HorasTrabalhadas <= 50){
		Sobrejornada = 0;
		HorasNormais = HorasTrabalhadas;
	}
	HorasExtras = Sobrejornada * 20,00;
	Salario = HorasNormais * 10,00;

	//Saídas
			printf ("Salário Normal: R$ %.2f \n", Salario);
			printf ("Horas Extras: R$ %.2f", HorasExtras);

}
