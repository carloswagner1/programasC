#include <stdio.h>

int busca_linear(int vetor[], int chave, int tam);

int main(){
    //vetor ordenado
    int vetor[6] = {1,3,5,8,12,42};

    //elemento chave que queremos encontrar no vetor
    int chave = 8;

    //aplicando a busca linear
    int ret = busca_linear(vetor, chave, 6);

    printf("O elemento %d está na posição %d\n", chave, ret);
    return 0;
}

int busca_linear(int vetor[], int chave, int tam){
    for(int i = 0; i < tam; i++){
        if(vetor[i]== chave){
            return i;
        }
    }
    return -1;
}