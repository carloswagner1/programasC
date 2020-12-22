#include <stdio.h>

//protótipo de função
/*
 * Assinatura das funções
 * -tipo de returno
 * -nome
 * _parametros de entrada
 */

int soma(int num1, int num2);

void mensagem();

int main(){
	int n1, n2, ret;

	printf("Num1: ");
	scanf("%d", &n1);

	printf("Num2: ");
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma de %d com %d é %d\n", n1, n2, ret);

	mensagem();
	return 0;
}
int soma(int num1, int num2){
	return num1 + num2;
}

void mensagem(){
	printf("Bem vindo!!\n");
}
