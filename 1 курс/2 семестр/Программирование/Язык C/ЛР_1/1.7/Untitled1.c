#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double R, a, B, C, x, t, t1;
     printf("������� a\n");
     scanf("%lf", &a);
     printf("������� B\n");
     scanf("%lf", &B);
     printf("������� C\n");
     scanf("%lf", &C);
     printf("������� x\n");
     scanf("%lf", &x);
     t = pow((1-(x/a)),2);
     t1 = pow((1-(x/sin(a))),2);
     R = (B*C/12)*((6*x*x*t)+(B*B*t1));
     printf("��������� = %lf\n", R);
     return 0;
}
