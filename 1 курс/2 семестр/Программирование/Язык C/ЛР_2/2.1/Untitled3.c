#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double y, x, r1, r2, w1, w2;
     int t, n;
     printf("¬ведите n\n");
     scanf("%d", &n);
     r1 = 57900000; r2 = 149600000;
     w1 = 2*3.14/687; w2 = 2*3.14/365;
     for (t=0; t<=n; t++)
     {
         x = r1*cos(w1*t)-r2*cos(w2*t);
         y = r1*sin(w1*t)-r2*sin(w2*t);
         printf("x = %lf  y = %lf\n", x, y);
     }
     system("pause");
     return 0;
}
