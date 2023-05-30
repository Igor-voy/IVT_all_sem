#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    printf("Введите год\n ");
    scanf("%d", &a);
    if (a%4==0)
        printf("Это высокосный год - 366 дней\n ");
    else
        printf("Это обычный год - 365 дней\n ");
    system("pause");
    return 0;
}
