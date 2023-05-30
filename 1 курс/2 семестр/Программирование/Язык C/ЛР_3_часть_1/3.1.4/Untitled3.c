#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
     setlocale(LC_ALL, "Rus");
     double P, a, n, i, s;
     printf("¬ведите n\n");
     scanf("%lf", &n);
     printf("¬ведите a\n");
     scanf("%lf", &a);
     s = 1;
     for(i=i+1; i<=n+1; i++)
     {
         s*=i;
     }
     P=pow(a,(n-1))/s;
     printf("–езультат = %lf\n", P);
     system("pause");
     return 0;
}
