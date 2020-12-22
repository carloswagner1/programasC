#include <stdio.h>
/* Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321. */
int main(){
	int num, centena, dezena, unidade;

	printf("Digite um número de 3 dígitos: ");
	scanf("%d", &num);

	centena = num/100;
	num = num % 100;
	dezena = num/10;
	unidade = num%10;

	printf("O número invertido é: %d%d%d.\n", unidade, dezena, centena);
	return 0;
}
