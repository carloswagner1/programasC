#include<stdio.h>
#include<stdlib.h>

int main(){

    int qtd, *p;
    printf("Informe a quantidades de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)calloc(qtd, sizeof(int));//calloc é declarado diferente e ele zera os valores

    if(p){
        for(int i = 0; i < qtd; i++){
            printf("Informe o valor para a posição %d do vetor: ", (i));
            scanf ("%d", &p[i]);
        }

        for(int i = 0; i < qtd; i++){
            printf(" No vetor numeros[%d] está o valor %d.\n", i, p[i]);
        }

        qtd = qtd * sizeof(int);

        printf(" A variavel 'p' ocupa %ld bytes em memoria.\n", qtd);
    }else{
        printf("Erro! Memoria insuficiente.");
    }    
    return 0;
}