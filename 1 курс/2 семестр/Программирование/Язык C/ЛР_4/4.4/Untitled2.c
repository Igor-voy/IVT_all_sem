#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    double x, y, t, R;
    printf("������� ���������� x\n ");
    scanf("%lf", &x);
    printf("������� ���������� y\n ");
    scanf("%lf", &y);
    printf("������� ������\n ");
    scanf("%lf", &R);
    t = sqrt(x*x+y*y);
    if (t<=R)
        printf("����� ����������� �����\n ");
    else
        printf("����� �� ����������� �����\n ");
    system("pause");
    return 0;
}
