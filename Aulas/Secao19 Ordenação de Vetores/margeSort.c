#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2);
void merge_sort(int vetor[], int inicio, int fim);

int main(){
    //vetor desordenado
    int vetor[6] = {8,3,1,42,12,5};
    //função de ordenação
    merge_sort(vetor, 0, 6-1);

    //apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
    // vetor temporario para o marge
    int temp[50];
    //variáveis auxiliares
    int i, j, k;
    //inicio primeiro grupo
    i = inicio1;
    //inicio do segundo grupo
    j = inicio2;
    k = 0;

    //enquanto tiver elementos em ambos os grupos
    while(i <= fim1 && j <= fim2){
        //faz a ordenação de acordo com cada grupo
        if(vetor[i] < vetor[j]){
            temp[k++] = vetor[i++];
        }else{
            temp[k++] = vetor[j++];
        }
    }
    //copiar os elementos restantes do primeiro grupo
    while(i <= fim1){
        temp[k++] = vetor[i++];
    }

    //copiar ps elementos restantes do segundo grupo
    while(j <= fim2){
        temp[k++] = vetor[j++];
    }

    //transfere os elementos do vetor temporário para o original
    for(i = inicio1, j = 0; i <= fim2; i++, j++){
        vetor[i] = temp[j];
    }
}

void merge_sort(int vetor[], int inicio, int fim){
    if(inicio < fim){
        //calcular o meio do vetor
        int meio = (inicio + fim) /2;

        //recursão esquerda
        merge_sort(vetor, inicio, meio);

        //recursão direita
        merge_sort(vetor, meio +1, fim);

        //fez merge com os dois grupos de vetores ordenados
        merge(vetor, inicio, meio, meio + 1, fim);
    }

}