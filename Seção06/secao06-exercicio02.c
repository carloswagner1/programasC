#include <stdio.h>

int main(){
	//variáveis
	int valor, a, b;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &valor);

	//Processamento
	if(valor > 0){
		a = valor;
		//Saída
		printf("O número %d é positivo.", a);
	}else{
		b = valor;
		//Saída
		printf("O número %d é negativo.", b);
	}
}
