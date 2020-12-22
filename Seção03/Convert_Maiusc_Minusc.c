#include <stdio.h>
/*  Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII. */
int main(){

	char caracter;

	scanf("%c", &caracter);

	int primeiro_maisculo = 'A';

	int primeiro_minusculo = 'a';

	int diferenca = primeiro_minusculo - primeiro_maisculo;

	printf("%c", caracter + diferenca);

	return 0;

}
