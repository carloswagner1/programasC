#include <stdio.h>

int main(){

	float salBase, salLiq;

	printf("Informe o salário-base do funcionário: ");
	scanf("%f", &salBase);

	salLiq = salBase + 0.05 * salBase - 0.07 * salBase;

	printf("O Salário Líquido R$ %.2f .\n", salLiq);
	return 0;
}
