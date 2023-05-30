#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double a, b, h, n, s, x, m, r, I;
     printf("Введите количество разбиений:\n");
     scanf("%lf", &n);
     a = 1.0;
	b = 2.2;
     h=(b-a)/n;
     s=0;
     x=a+h;
     while(x <= b-h)
        {
          m=x*x;
          r = (sqrt(1.5 * x + 0.6) / (1.6 + sqrt(0.8 * m + 2)));
          s=s+r;
          x=x+h;
        }
     I = h * ((sqrt(1.5 * a + 0.6) / (1.6 + sqrt(0.8 * a * a + 2)) + sqrt(1.5 * b + 0.6) / (1.6 + sqrt(0.8 * b * b + 2))) / 2 + s);
     printf("Результат = %lf\n",I);
     system("pause");
     return 0;
}
