#include <stdio.h>

int busca_binaria(int vetor[], int chave, int tam);


int main (){
    //vetor ordenado
    int vetor[6] = {1,3,5,8,12,42};

    //elemento chave que queremos encontrar no vetor
    int chave = 8;

    //aplicando a busca binária
    int ret = busca_binaria(vetor, chave, 6);

    printf("O elemento %d está na posição %d\n", chave, ret);
    return 0;
}

int busca_binaria(int vetor[], int chave, int tam){
    int inicio = 0;
    int fim = tam - 1;

    while(inicio <= fim){
        //encontra o meio do vetor
        int meio = (inicio + fim) / 2;

        //se a chave estiver no meio, retorna 
        if(chave == vetor[meio]){
            return meio;            
        }

        //se a chave for menor que o valor meio, passa para o proximo elemento
        if(chave < vetor[meio]){
            fim = meio - 1;            
        }else{
            inicio = meio + 1;
        }
    }
    //se não encontrar nada
    return - 1;
}