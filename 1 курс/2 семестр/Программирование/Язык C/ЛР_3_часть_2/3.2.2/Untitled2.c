#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double a, b, h, n, s, x, m, r, I;
     printf("Введите количество разбиений:\n");
     scanf("%lf", &n);
     a=0.8;
     b=1.8;
     h=(b-a)/n;
     s=0;
     x=a+h;
     while(x <= b)
        {
          m=x*x;
          r=(sqrt(0.8*m+1)/(x+sqrt(1.5*m+2)));
          s=s+r;
          x=x+h;
        }
     I=h*s;
     printf("Результат = %lf\n",I);
     system("pause");
     return 0;
}
