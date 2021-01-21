#include <stdio.h>

void bubble_sort(int vetor[], int tam);

int main(){
    //vetor desordenado
    int vetor[6] = {8,3,1,42,12,5};
    //função de ordenação
    bubble_sort(vetor, 6);

    //apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0; 
}

void bubble_sort(int vetor[], int tam){
    //variável auxiliar
    int proximo = 0;

    //varrer todo vetor
    for(int i = 0; i < tam; i++){
        //trabalhar os próximos elementos
        for(int j = 0; j < tam -1 ; j++){
            //ocorre a troca
            if(vetor[j] > vetor[j+1]){
                proximo = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = proximo; 
            }
        }
    }
}