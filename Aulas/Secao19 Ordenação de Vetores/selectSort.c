#include <stdio.h>

void select_sort(int vetor[], int tam);

int main(){
    //vetor desordenado
    int vetor[6] = {8,3,1,42,12,5};
    //função de ordenação
    select_sort(vetor, 6);

    //apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;    
}

void select_sort(int vetor[], int tam){
    int menor, troca;

    //loop externo para repassar todo o vetor
    for(int i = 0; i < (tam-1); i++){
        menor = i;
        //loop interno para trabalhar o proximo elemento
        for(int j = i + 1; j < tam; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        //efetuar troca
        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor]=troca;
        }
    }
}