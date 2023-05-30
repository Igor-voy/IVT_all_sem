#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double r, z, x, s, o, o1, t;
     printf("¬ведите z\n");
     scanf("%lf", &z);
     printf("¬ведите s\n");
     scanf("%lf", &s);
     printf("¬ведите x\n");
     scanf("%lf", &x);
     t = tan(log(s)*x);
     o = 2.71*pow(10,6)*z*t*t;
     o1 = exp((-s*tan(x))+(fabs(z*x)));
     r = o/o1;
     printf("–езультат равен %lf\n", r);
     return 0;
}
