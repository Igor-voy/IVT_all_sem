#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double y, x, sum;
     int k, n;
     printf("¬ведите x\n");
     scanf("%lf", &x);
     printf("¬ведите n\n");
     scanf("%d", &n);
     sum = 0;
     for(k = 3; k<=n; k++)
     {
         sum+=(2*x*x*x*k)+(cos(k)*sqrt(x+1))-(2.3/k);
     }
     y = 6.3*x-4*sum;
     printf("–езультат = %lf\n", y);
     system("pause");
     return 0;
}
