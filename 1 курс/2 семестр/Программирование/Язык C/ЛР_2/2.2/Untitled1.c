#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double a, b, n, I, h, x, s, r;
     printf("������� ������ a\n");
     scanf("%lf", &a);
     printf("������� ������ b\n");
     scanf("%lf", &b);
     printf("������� ����� ���������\n");
     scanf("%lf", &n);
     h = (b-a)/n;
     x = a+h;
     s = 0;
     while (x <= b)
        {
        r = exp(x+2) ;
        s = s+r;
        x = x+h;
        }
     I = h*s;
     printf("��������� ����� %lf\n", I);
     system("pause");
     return 0;
}
