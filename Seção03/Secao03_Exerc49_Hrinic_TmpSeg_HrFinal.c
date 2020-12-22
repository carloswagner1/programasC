#include <stdio.h>

/* Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma. */

int main(){

   int duracao=0, hrInicial, minInicial, segInicial, hrFinal, minFinal, segFinal;

   printf("Informe a hora inicial: ");
   scanf("%d", &hrInicial);
   printf("Informe os minutos iniciais: ");
   scanf("%d", &minInicial);
   printf("Informe os segundos iniciais: ");
   scanf("%d", &segInicial);
   printf("Informe o tempo de duração da experiência: ");
   scanf("%d", &duracao);

   hrFinal = (duracao/3600);
   minFinal = (duracao-(hrFinal*3600))/60;
   segFinal = duracao - (hrFinal*3600)-(minFinal*60);

   hrFinal = hrFinal + hrInicial;
   minFinal = minFinal + minInicial;
   segFinal = segFinal + segInicial;

   printf("%dh : %dm :%ds \n",hrFinal,minFinal,segFinal);

   return 0;
}
