#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    double x, y, t, R;
    printf("Введите координату x\n ");
    scanf("%lf", &x);
    printf("Введите координату y\n ");
    scanf("%lf", &y);
    printf("Введите радиус\n ");
    scanf("%lf", &R);
    t = sqrt(x*x+y*y);
    if (t<=R)
        printf("Точка принадлежит кругу\n ");
    else
        printf("Точка не принадлежит кругу\n ");
    system("pause");
    return 0;
}
