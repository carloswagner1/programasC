#include <stdio.h>

//aula  escrevendo funções

//Estrutura das funções
/*
 - tipo de retorno
 - nome
 - parâmetros
 - implementação
 - retorno (opcional)
*/

void mensagem();

int soma(int num1, int num2);

void proximo_char(char caractere);

int main(){
	printf("Olá...");
	mensagem();
	//int retorno =soma(4,6);
	printf("Retorno = %d\n", soma(4,6));
	char cara = 97;
	proximo_char(cara);
	return 0;
}

void mensagem(){
	printf("Bem vindo!!\n");
}

int soma(int num1, int num2){
	return num1 +num2;
}//
void proximo_char(char caractere){
	printf("%c\n", caractere + 1);
}
