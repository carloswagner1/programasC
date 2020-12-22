#include <stdio.h>

int main() {
  int qtd, cod;
  float VlPagar;


  printf("Informe o código do lanche: ");
  scanf("%d", &cod);
  printf("Informe a quantidade: ");
  scanf("%d", &qtd);

	switch(cod) {
	 case 100:
		 VlPagar = qtd * 1.20;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 case 101:
		 VlPagar = qtd * 1.30;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 case 102:
		 VlPagar = qtd * 1.50;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 case 103:
		 VlPagar = qtd * 1.20;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 case 104:
		 VlPagar = qtd * 1.70;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 case 105:
		 VlPagar = qtd * 2.20;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 case 106:
		 VlPagar = qtd * 1.00;
		 printf("Valor Total a pagar R$ %.2f.", VlPagar);
		 break;
	 default:
		 printf("Código inválido.");
	}
	return 0;
}
