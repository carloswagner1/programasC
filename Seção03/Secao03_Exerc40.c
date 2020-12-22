#include <stdio.h>

int main(){

	int diasTrab;
	float valLiq;

	printf("Informe o número de dias trabalhados: ");
	scanf("%d", &diasTrab);

	valLiq = 0.92*(diasTrab * 30);

	printf("A quantia líquida a ser paga será de R$ %.2f .", valLiq);
	return 0;
}
