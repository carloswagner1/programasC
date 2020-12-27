#include <stdio.h>

int calculasegundos(int num1, int num2, int num3);

int main(){
    int horas, minutos, segundos;

    printf("informe a quantidade de horas: ");
    scanf("%i", &horas);
    printf("informe a quantidade de minutos: ");
    scanf("%i", &minutos);
    printf("informe a quantidade de segundos: ");
    scanf("%i", &segundos);    

    printf("Os valores digitados correspondem a %i segundos.\n", calculasegundos(horas, minutos, segundos));
    
    return 0;
}

int calculasegundos(int num1, int num2, int num3){

    int segundos;
    segundos = 3600*num1 + 60*num2 + num3;
    return segundos;
}
