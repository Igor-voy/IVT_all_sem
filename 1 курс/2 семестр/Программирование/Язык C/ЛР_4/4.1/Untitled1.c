#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("Введите первое число\n ");
    scanf("%ld", &a);
    printf("Введите второе число\n ");
    scanf("%ld", &b);
    if (a % 2 == 0)
    {
        printf("Число %ld нечетное\n ", b);
    }
    else
    {
        printf("Число %ld нечетное\n ", a);
    }
    system("pause");
    return 0;
}
