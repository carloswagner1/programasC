#include <stdio.h>

#include <math.h>
/* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.
*/

int main() {
    float amg1, amg2, amg3, vlArrec, premio;
    printf("\nValor aposta amigo 1: ");
    scanf("%f", &amg1);
    printf("\nValor aposta amigo 2: ");
    scanf("%f", &amg2);
    printf("\nValor aposta amigo 3: ");
    scanf("%f", &amg3);
    vlArrec = amg1 + amg2 + amg3;
    printf("\nInforme o valor do prêmio: ");
    scanf("%f", &premio);
    float pct1, pct2, pct3;
    pct1 = (amg1 * 100)/vlArrec;
    pct2 = (amg2 * 100)/vlArrec;
    pct3 = (amg3 * 100)/vlArrec;
    printf("\nAmigo 1 receberá: R$%.2f.", premio * pct1/100);
    printf("\nAmigo 2 receberá: R$%.2f.", premio * pct2/100);
    printf("\nAmigo 3 receberá: R$%.2f.", premio * pct3/100);
    return 0;
}
