#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double h, a, b, c, x, t1, t2, t3;
     printf("������� a\n");
     scanf("%lf", &a);
     printf("������� b\n");
     scanf("%lf", &b);
     printf("������� c\n");
     scanf("%lf", &c);
     printf("������� x\n");
     scanf("%lf", &x);
     t1 = pow((x*x+a*a),1/3);
     t2 = pow((x*x+b*b),3/4);
     t3 = pow((x-c),2/3);
     h = (-(x-a)/t1)-((4*t2)/(2+a+b+t3));
     printf("��������� ����� %lf\n", h);
     return 0;
}
