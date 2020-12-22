#include <stdio.h>

int main(){
	//Variáveis
	int ContadorTotal = 0, ContadorSit01 = 0, ContadorSit02 = 0, ContadorSit03 = 0,
			ContadorSit04 = 0, Id, Defeito;

	//Entradas
	printf("Informe o Id: ");
	scanf("%d", &Id);

	while(Id != 0){
		printf("1 - Necessita de esfera.\n");
		printf("2 - Necessita de limpeza.\n");
		printf("3 - Necessita de troca de cabo ou conector.\n");
		printf("4 - Quebrado ou inutilizado.\n");
		printf("Informe o tipo de defeito: \n");
		scanf("%d", &Defeito);

		//processamento
		if(Defeito == 1){
			ContadorSit01 = ContadorSit01 + 1;
		}
		if(Defeito == 2){
			ContadorSit02 = ContadorSit02 + 1;
		}
		if(Defeito == 3){
			ContadorSit03 = ContadorSit03 + 1;
		}
		if(Defeito == 4){
			ContadorSit04 = ContadorSit04 + 1;
		}
		ContadorTotal = ContadorTotal + 1;
		//Entradas
		printf("Informe o Id: ");
		scanf("%d", &Id);
	}
	float P1, P2, P3, P4; //Percentual das situações declaradas
	//(float) cast
	P1 = ((float)ContadorSit01 / (float)ContadorTotal * 100.0);
	P2 = ((float)ContadorSit02 / (float)ContadorTotal * 100.0);
	P3 = ((float)ContadorSit03 / (float)ContadorTotal * 100.0);
	P4 = ((float)ContadorSit04 / (float)ContadorTotal * 100.0);

	printf("Quantidade de mouses %d\n\n", ContadorTotal);
	printf("Situação \t\t\t\t\tQuantidade \tPercentual\n");
	printf("1 - Necessita de esfera \t\t\t\t%d \t%.2f%%\n", ContadorSit01, P1);
	printf("2 - Necessita de limpeza \t\t\t\t%d \t%.2f%%\n", ContadorSit02, P2);
	printf("3 - Necessita de troca de cabo ou conector \t\t%d \t%.2f%%\n", ContadorSit03, P3);
	printf("4 - Quebrado ou inutilizado \t\t\t\t%d \t%.2f%%\n", ContadorSit04, P4);
}
