#include <stdio.h>

int main()
{
    int dd, mm, yy;

    printf("Informe a data (DD/MM/YYYY format): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    //check year
    if (yy >= 1900 && yy <= 9999)
    {
        //check month
        if (mm >= 1 && mm <= 12)
        {
            //check days
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                printf("Data é válida.\n");
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                printf("Data é válida.\n");
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
                printf("Data é válida.\n");
            else if (dd == 29 && mm == 2 && (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0)))
                printf("Data é válida.\n");
            else
                printf("Dia não é válido.\n");
        }
        else
        {
            printf("Mês não é válido.\n");
        }
    }
    else
    {
        printf("Ano não é válido.\n");
    }

    return 0;
}
