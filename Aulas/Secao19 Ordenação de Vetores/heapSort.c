#include <stdio.h>

void cria_heap(int vetor[], int inicio, int fim);
void heap_sort(int vetor[], int tam);

int main(){
    //vetor desordenado
    int vetor[6] = {8,3,1,42,12,5};
    //função de ordenação
    heap_sort(vetor, 6);

    //apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}

void cria_heap(int vetor[], int inicio, int fim){
    int pai = vetor[inicio];
    int filho = inicio * 2 + 1;

    while(filho <= fim){
        if(filho < fim){
            if(vetor[filho] < vetor[filho + 1]){
                filho = filho + 1;
            }
        }
        if(pai < vetor[filho]){
            vetor[inicio] = vetor[filho];
            inicio = filho;
            filho = 2 * inicio +1;
        }else{
            filho = fim +1;
        }
    }
    vetor[inicio] = pai;
}

void heap_sort(int vetor[], int tam){
    int troca;
    int meio = (tam - 1) / 2;

    //cria a heap a partir dos dados
    for(int i = meio; i >= 0; i--){
        cria_heap(vetor, i, tam - 1);
    }

    for(int i = tam - 1; i >= 1; i--){
        /*
        pegar o maior elemento da heap e coloca na sua
        posição correspondente no vetor
        */
        troca = vetor[0];
        vetor[0] = vetor [i];
        vetor[i] = troca;

        //reconstrói a heap
        cria_heap(vetor, 0, i - 1);
    }
}