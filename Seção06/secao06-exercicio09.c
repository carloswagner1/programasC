#include <stdio.h>

int main(){
	//variáveis
	float NivelPoluicao;

	//entradas
	printf("Informe o índice de poluição: ");
	scanf("%f", &NivelPoluicao);

	//processamentos
	if(NivelPoluicao >= 0.30 && NivelPoluicao < 0.40){
		printf("Suspender as atividades do Grupo 1.");
	}else if(NivelPoluicao >= 0.40 && NivelPoluicao < 0.50){
		printf("Suspender as atividades dos Grupos 1 e 2.");
	}else if(NivelPoluicao >= 0.50){
		printf("Suspender as atividades de todos os Grupos.");
	}else{
		printf("Níveis de poluição aceitáveis.");
	}

}
