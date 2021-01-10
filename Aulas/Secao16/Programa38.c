#include<stdio.h>
#include<stdlib.h>

int main(){

    int qtd, *p;
    printf("Informe a quantidades de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)calloc(qtd, sizeof(int));//calloc é declarado diferente e ele zera os valores

    if(p){
        
        printf(" A variavel 'p' ocupa %ld bytes em memoria.\n", qtd * sizeof(int));

        printf("Informe a quantidades de elementos para o vetor: ");
        scanf("%d", &qtd);

        p =  (int*)realloc(p, qtd *sizeof(int));

        if(p){
            printf(" A variavel 'p' ocupa %ld bytes em memoria.\n", qtd * sizeof(int));

        }else{
            printf("Erro! Memoria insuficiente.");
        }

    }else{
        printf("Erro! Memoria insuficiente.");
    }    
    return 0;
}