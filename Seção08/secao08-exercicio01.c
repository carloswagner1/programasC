#include <stdio.h>

int main(){
	//Variáveis
	int vetor[5], pares[5], ContPares = 0;
	for(int i = 0; i < 5; i++){
		printf("Informe um valor para o vetor: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			if(vetor[i] > 0){
				pares[ContPares] = vetor[i];
				ContPares = ContPares + 1;
			}
		}
	}
	for(int i = 0; i < ContPares; i++){
		printf("%d\n", pares[i]);
	}
}
