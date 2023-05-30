#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
     setlocale(LC_ALL, "Rus");
     int n, i;
     printf("¬ведите n\n");
     scanf("%d", &n);
     for (i=2; i<=n; i++)
        {
            if ((i%2)!=0 && (i%3)!=0 && (i%5)!=0 && (i%7)!=0 || i==2 || i==3 || i==5 || i==7)
            printf(" %d", i);
        }
     printf("\n");
     system("pause");
     return 0;
}
