#include <stdio.h>

/*Ano Bissexto*/

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(ano % 400 == 0){
    	printf("Ano bissexto.\n");
    }else if(ano % 4 == 0 && ano % 100 != 0){
    	printf("Ano bissexto.\n");
    }else{
    	printf("Não é um ano bissexto.\n");
    }
    return 0;
}
