#include<stdio.h>

int dobro(int n);

int main(){
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);

	printf("O dobro do número %d é %d.", num, dobro(num));

	return 0;
}

int dobro(int n){
	int dobro;
	dobro = n * 2;
	return dobro;
}
