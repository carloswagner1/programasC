#include <stdio.h>

int main() {
    float ntTrab, ntAval1, ntExFinal, media;

    printf("Trabalho de Laboratório: ");
    scanf("%f", &ntTrab);
    printf("Avaliação Semestral: ");
    scanf("%f", &ntAval1);
    printf("Exame Final: ");
    scanf("%f", &ntExFinal);
    media = ((ntTrab*2) + (ntAval1 *3) + (ntExFinal * 5))/10;
    if (media >= 5){
        printf("\nMédia Final: %.2f.\nAluno aprovado.", media);
    }else if (media < 3){
        printf("\nMédia Final: %.2f.\nAluno reprovado!", media);
    }else{
    	printf("\nMédia Final: %.2f.\nAluno em recuperação", media);
    }
    return 0;
}
