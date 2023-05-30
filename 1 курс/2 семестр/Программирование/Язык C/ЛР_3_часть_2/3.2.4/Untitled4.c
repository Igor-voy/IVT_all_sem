#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double a, b, h, n, s1, s2, x, m, r, I;
     printf("Введите количество разбиений:\n");
     scanf("%lf", &n);
     a=0.8;
     b=1.8;
     h=(b-a)/n;
     x=a+h;
     s1=0;
     s2=0;
         while(x <= b-h)
        {
          m=x*x;
          r=(sqrt(0.8*m+1)/(x+sqrt(1.5*m+2)));
          s1=s1+r;
          x=x+2*h;
        }
      x=a+2*h;
         while(x <= b-2*h)
        {
          m=x*x;
          r=(sqrt(0.8*m+1)/(x+sqrt(1.5*m+2)));
          s2=s2+r;
          x=x+2*h;
        }
     I=(h/3)*((sqrt(0.8*a*a+1)/(a+sqrt(1.5*a*a+2))+sqrt(0.8*b*b+1)/(b+sqrt(1.5*b*b+2)))+4*s1+2*s2);
     printf("Результат = %lf\n",I);
     system("pause");
     return 0;
}
