#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    printf(" 1-да, 0-нет\n ");
    printf("Загадайте число от 1 до 5\n ");
    printf("Ваше число больше 3?\n ");
    scanf("%d", &a);
    if (a==1)
    {
        printf("Ваше число 4?\n ");
        scanf("%d", &a);
        if (a==0)
            printf("Ваше число 5\n ");
        else
          printf("Я угадал\n ");
    }
    else
    {
        printf("Ваше число 1?\n ");
        scanf("%d", &a);
        if (a==0)
        {
            printf("Ваше число 2?\n ");
            scanf("%d", &a);
            if (a==0)
                printf("Ваше число 3\n ");
            else
                printf("Я угадал\n ");
        }
        else
          printf("Я угадал\n ");
    }
    system("pause");
    return 0;
}
