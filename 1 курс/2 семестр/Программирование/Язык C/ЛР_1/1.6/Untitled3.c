#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double y, x, t, pi = 3.14;
     printf("������� x\n");
     scanf("%lf", &x);
     printf("������� y\n");
     scanf("%lf", &y);
     t = cos((x*pi)/180);
     y = -2*sqrt((y*y)+((4*x*x)/3))-(t*t)/x;
     printf("��������� ����� %lf\n", y);
     return 0;
}
