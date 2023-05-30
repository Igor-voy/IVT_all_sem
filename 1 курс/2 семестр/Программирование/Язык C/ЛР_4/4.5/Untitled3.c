#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int x;
    printf("Введите число\n ");
    scanf("%d", &x);
    if (x%3==0)
        printf("Число %d кратно 3\n ", x);
    else
        printf("Остаток = %d\n ", x%3);
    system("pause");
    return 0;
}
