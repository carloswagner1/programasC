#include <stdio.h>
// std = Standart (Padrão)
// io - input/output (Entrada/Saída)

int main(){
	//Declaração de variáveis
	float metros, centimetros;

	//Entradas
	printf("Informe a medida em metros: ");
	scanf("%f", &metros);

	//Processamentos
	centimetros = metros * 100;

	//Saída
	printf("%.2f metros corresponde %.2f centímetros", metros, centimetros);

}
