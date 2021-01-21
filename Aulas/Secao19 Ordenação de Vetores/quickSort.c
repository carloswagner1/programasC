#include <stdio.h>

void quick_sort(int vetor[], int tam);

int main(){
    //vetor desordenado
    int vetor[6] = {8,3,1,42,12,5};
    //função de ordenação
    quick_sort(vetor, 6);

    //apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

void quick_sort(int vetor[], int tam){
    int i, j, grupo, troca;

    //critério de parada
    if(tam < 2){
        return;
    }else{
        grupo = vetor[tam / 2];
    }

    //fazendo um loop única se comportar como dois

    for(i = 0, j = tam - 1;; i++, j--){
        //fazermos a movimentação dos elementos do vetor
        while(vetor[i] < grupo){
            i++;
        }

        //fazendo a movimentação dos elementos no vetor
        while(grupo < vetor[j]){
            j--;
        }
        if(i >= j){
            break;
        }else{
            //trocas
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }    
    //ussar recursividade para ordenar os grupos
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam -i);

}