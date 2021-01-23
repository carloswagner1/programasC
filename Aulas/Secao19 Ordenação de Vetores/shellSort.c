#include <stdio.h>

void shell_sort(int vetor[], int tam);

int main(){
    //vetor desordenado
    int vetor[6] = {8,3,1,42,12,5};
    //função de ordenação
    shell_sort(vetor, 6);

    //apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }
    return 0; 
}

void shell_sort(int vetor[], int tam){
    //variável auxiliar
    int grupo = 1;

    //gerar o tamanho do grupo de acordo com o tamanho do vetor
    while(grupo < tam){
        grupo = 3 * grupo +1;   
    }

    //varrer o vetor enquanto houver grupos para ordenar
    while(grupo > 1){
        //dividir o grupo em 3
        grupo /= 3;
        //varremos cada grupo;
        for(int i = grupo; i < tam; i++){
            int troca = vetor[i];
            int j = i - grupo;
            //realiza a troca
            while( j >= 0 && troca < vetor[j]){
                vetor[j + grupo] = vetor[j];
                j -= grupo;
            }
            //realiza a troca
            vetor[j + grupo] = troca;
        }
    }

}