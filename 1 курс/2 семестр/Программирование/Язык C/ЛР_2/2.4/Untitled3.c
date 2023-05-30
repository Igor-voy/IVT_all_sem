#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int n, i;
     printf("¬ведите число\n");
     scanf("%d", &n);
     for(i = 1; i <= n; i++)
     {
         printf("%d ", i);
     }
     system("pause");
     return 0;
}
