#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char converte_data(char data[11]);

int main (){
    char data [11];
    //char converte_data(char data[11]);

    printf("Digite a data(DD/MM/AAAA): ");
    scanf("%s", &data);
    fflush(stdin);
    converte_data(data);

}

char converte_data(char data[11]){

        char dia[3];
        dia[0]=data[0];
        dia[1]=data[1];
        dia[2]='\0';
        char mes[3];
        mes[0]=data[3];
        mes[1]=data[4];
        mes[2]='\0';
        char ano[5];
        ano[0]=data[6];
        ano[1]=data[7];
        ano[2]=data[8];
        ano[3]=data[9];
        ano[4]='\0';

        int dia_final;
        int mes_final;
        int ano_final;
        char mes_por_extenso[20];

        dia_final=atoi(dia);
        mes_final=atoi(mes);
        ano_final=atoi(ano);

        switch(mes_final){
        case 1:
        strcpy(mes_por_extenso,"Janeiro");
        break;

        case 2:
        strcpy(mes_por_extenso,"Fevereiro");
        break;

        case 3:
        strcpy(mes_por_extenso,"marco");
        break;

        case 4:
        strcpy(mes_por_extenso,"abril");
        break;

        case 5:
        strcpy(mes_por_extenso,"maio");
        break;

        case 6:
        strcpy(mes_por_extenso,"junho");
        break;

        case 7:
        strcpy(mes_por_extenso,"julho");
        break;

        case 8:
        strcpy(mes_por_extenso,"agosto");
        break;

        case 9:
        strcpy(mes_por_extenso,"setembro");
        break;

        case 10:
        strcpy(mes_por_extenso,"outubro");
        break;

        case 11:
        strcpy(mes_por_extenso,"novembro");
        break;

        case 12:
        strcpy(mes_por_extenso,"dezembro");
        break;
    }
    printf("%i de %s de %i\n",dia_final,mes_por_extenso,ano_final);
}
