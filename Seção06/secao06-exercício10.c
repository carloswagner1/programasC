#include <stdio.h>

int main(){
	//variáveis
	int Idade;

	//entradas
	printf("Informe a idade do nadador: ");
	scanf("%d", &Idade);

	//processamentos
	if(Idade >= 5 && Idade <= 7){
		printf("Categoria Infantil-A");
	}else if(Idade >= 8 && Idade <= 11){
		printf("Categoria Infantil-B");
	}else if(Idade >= 12 && Idade <= 13){
		printf("Categoria Juvenil-A");
	}else if(Idade >= 14 && Idade <= 17){
		printf("Categoria Juvenil-B");
	}else if(Idade >= 18){
		printf("Categoria Adulto");
	}

}
