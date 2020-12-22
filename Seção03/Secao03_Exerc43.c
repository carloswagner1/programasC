#include <stdio.h>

int main(){

	float valProd, valVista, valParc, comVista, ComParc;

	printf("Informe o valor do produto: ");
	scanf("%f", &valProd);

	valVista = 0.9 * valProd;
	valParc = valProd/3;
	comVista = valVista * 0.05;
	ComParc = valProd * 0.05;

	printf("Valor à vista R$ %.2f.\nComissão do vendedor R$ %.2f.\n\n", valVista, comVista);
	printf("Valor Parcelado 3 x R$ %.2f.\nComissão do vendedor R$ %.2f.\n", valParc, ComParc);
	
	return 0;
}
