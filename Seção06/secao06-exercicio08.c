#include <stdio.h>

int main(){
	//variáveis
	int numero;

	//entradas
	printf("informe um número: ");
	scanf("%d", &numero);

	if(numero % 2 == 0){
		printf("O número é par e ");
	}else{
		printf("O número é impar e ");
	}
	if(numero > 0){
		printf("positivo.");
	}else{
		printf("negativo.");
	}
}
