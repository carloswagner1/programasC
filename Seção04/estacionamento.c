#include <stdio.h>

int main(){
    int hr_ent, hr_saida, min_ent, min_saida, hr_final, min_final, hr_total, min_total;
    float preco;

    printf("Informe o horário de entrada (HH:MM format): ");
    scanf("%d:%d", &hr_ent, &min_ent);
    printf("Informe o horário de saída (HH:MM format): ");
    scanf("%d:%d", &hr_saida, &min_saida);

    //Define horario:
    if(hr_ent > hr_saida){
        hr_saida = hr_saida + 24;
    }
    if(min_ent > min_saida){
        min_saida = min_saida + 60;
        hr_saida = hr_saida - 1;
    }
    min_final = min_saida - min_ent;
    hr_final = hr_saida - hr_ent;

    if(hr_final >= 1){
        if(min_final >= 1){
            printf("Tempo de permanência %dH:%dMin.\n", hr_final, min_final);
        }else{
            printf("Tempo de permanência %dH:00Min.\n", hr_final);
        }
    }else{
        printf("Tempo de permanência 00H:%dMin.\n", min_final);
    }
	//Define valores:
    min_total = (hr_final * 60) + min_final;

    if(min_total <= 120 && min_total <= 60){
    		preco = 1.00;
    		printf("Preço total: R$%.2f.\n", preco);
   	}else if(min_total <= 120 && min_total > 60){
    		preco = 2.00;
    		printf("Preço total: R$%.2f.\n", preco);
    }
    if(min_total <= 240 && min_total <= 180 && min_total > 120){
    		preco = 2 + 1.40;
    		printf("Preço total: R$%.2f.\n", preco);
    }else if(min_total <= 240 && min_total > 180 && min_total > 120){
    		preco = 2 + (1.40 * 2);
    		printf("Preço total: R$%.2f.\n",preco);
    }
    if(min_total > 240){
    	 hr_total = (min_total/60) + 1;
	   preco = 4.40 + ((hr_total - 4) * 2);
       printf("Preço total: R$%.2f.\n", preco);
   }
   return 0;
}
