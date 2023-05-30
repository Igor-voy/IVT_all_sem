#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double a, b, h, n, s, x, m, r, I;
     printf("Введите количество разбиений:\n");
     scanf("%lf", &n);
     a=1.0;
     b=2.2;
     h=(b-a)/n;
     s=0;
     x=a;
     while(x <= b-h)
        {
          m=x*x;
          r=(sqrt(1.5*x+0.6)/(1.6+sqrt(0.8*m+2)));
          s=s+r;
          x=x+h;
        }
     I=h*s;
     printf("Результат = %.10lf\n",I ," +/- ");
     system("pause");
     return 0;
}
