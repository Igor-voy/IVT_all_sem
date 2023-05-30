#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int x;
     printf ("¬ведите x\n");
     scanf ("%d", &x);
     if(x==0)
         printf("y = 0\n");
     else
     {
     if(x>0)
        printf("y = %d\n", x-2);
     else
        printf("y = %d\n", abs(x));
     }
     system("pause");
     return 0;
}
