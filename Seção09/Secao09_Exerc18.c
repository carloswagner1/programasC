#include <stdio.h>
int expoente(int n1, int n2);
int main(){

    int num1, num2;
    printf("Informe a base: ");
    scanf("%i", &num1);
    printf("Informe o expoente: ");
    scanf("%i", &num2);

    printf("Resultado = %i\n", expoente(num1, num2));

    return 0;
}

int expoente(int n1, int n2){
    int resultado=0, i;
    for(i = 0; i <= n2; i++){
        if(i == 0){
            resultado = 1;
        }else{
            resultado = resultado*n1;
        } 
    }
    return resultado;
}