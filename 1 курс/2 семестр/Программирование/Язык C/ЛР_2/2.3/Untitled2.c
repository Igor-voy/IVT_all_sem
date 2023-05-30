#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int m, a, b;
     printf("¬ведите число\n");
     scanf(" %d", &m);
     a = 0;
     b = 1;
     printf("%d",b);
     for(b = 1; b <= m; b+=a)
     {
        printf(" %d",b);
        a = b-a;
     }
     printf("\n");
     system("pause");
     return 0;
}
