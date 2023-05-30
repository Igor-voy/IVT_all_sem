#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double x, y, u, t, p, pi = 3.14, p1, o, o1;
     printf("¬ведите x\n");
     scanf("%lf", &x);
     printf("¬ведите y\n");
     scanf("%lf", &y);
     p1 = x+y;
     p = (p1*pi)/180;
     t = sin(p);
     o = 1+t*t;
     o1 = 2+fabs(x-(2*x*x)/(1+fabs(t)));
     u = o/o1 ;
     printf("–езультат равен %lf\n", u);
     return 0;
}
