#include <stdio.h>
// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos
int main(){

   int tempo, horas, horas_seg, minutos, segundos;

   horas_seg=3600;//horas em segundos
   printf("Entre com o número de segundos: ");
   scanf("%d", &tempo);

   horas = (tempo/horas_seg); //resultado da hora
   minutos = (tempo -(horas_seg*horas))/60;
   segundos = (tempo -(horas_seg*horas)-(minutos*60));
   printf("%dh : %dm :%ds \n",horas,minutos,segundos);

   return 0;
}
