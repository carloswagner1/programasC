#include <stdio.h>

int main(){
	float valprod, valfinal;
	int dest;

	printf("Digite o valor do produto (R$): ");
	scanf("%f", &valprod);
	printf("Digite o Estado de Destino:\n1-MG\n2-MS\n3-RJ\n4-SP\n");
	scanf("%d", &dest);

	switch(dest) {
	 case 1:
		 valfinal = valprod + valprod * 0.07;
		 printf("O valor final do produto é R$ %.2f\n", valfinal);
		 break;
	 case 2:
		 valfinal = valprod + valprod * 0.08;
		 printf("O valor final do produto é R$ %.2f\n", valfinal);
	 	 break;
	 case 3:
		 valfinal = valprod + valprod * 0.15;
		 printf("O valor final do produto é R$ %.2f\n", valfinal);
	 	 break;
	 case 4:
		 valfinal = valprod + valprod * 0.12;
		 printf("O valor final do produto é R$ %.2f\n", valfinal);
	 	 break;
	 default:
		 printf("Destino inválido.");
	}
	return 0;
}
