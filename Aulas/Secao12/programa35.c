#include <stdio.h>

union pessoa{
    char nome[100];
    int idade;
};

int main(){
    union pessoa pes;
    strcpy(pes.nome, "Angelina Jolie");
    printf("Dados de %s\n", pes.nome);
    
    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("A variável 'pes' ocupa %ld bytes em memoria.\n", sizeof(pes));

    return 0;
}