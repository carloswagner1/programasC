#include <stdio.h>
/* Desenvolva um programa que determine os somaes de um número inteiro introduzido pelo
utilizador. */
int main(){
	int num,i,soma = 0;
	printf("Insira um número inteiro: ");
	scanf("%d", &num);

	for (i = 1; i < num; i++){
		if(num % i == 0){
			soma= soma + i;
		}
	}
	printf("A soma dos divisores de %d é %d.\n", num, soma);
	return 0;
}
