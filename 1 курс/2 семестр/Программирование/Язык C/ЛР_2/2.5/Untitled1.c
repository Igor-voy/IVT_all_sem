#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double z, x, p;
     int  n, i;
     printf("������� x\n");
     scanf("%lf", &x);
     printf("������� n\n");
     scanf("%d", &n);
     p = 1;
     for(i = 1; i <= n; i++)
     {
        p *= pow((1+(10+x)/x),1/i);
     }
     z = -cos(0.1*p);
     printf("��������� = %lf\n", z);
     system("pause");
     return 0;
}
