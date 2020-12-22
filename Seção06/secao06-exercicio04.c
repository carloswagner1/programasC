#include <stdio.h>
#include <ctype.h>

int main (){

	//Variáveis
	float altura, peso_ideal;
	char sexo;

	//Entradas
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	gets(stdin);
	printf("Informe o sexo (m/f): ");
	scanf("%c", &sexo);

	//Processamentos
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		printf("O peso ideal é %.2f kg", peso_ideal);
	}
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("O peso ideal é %.2f kg", peso_ideal);
	}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("Sexo não reconhecido. \n");
	}
}
