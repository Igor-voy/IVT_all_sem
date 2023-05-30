#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int a, b, c;
     printf ("Введите числа a, b, c\n");
     scanf ("%d", &a);
     scanf ("%d", &b);
     scanf ("%d", &c);
     if (a>b)
     {
        if (a>c)
        {
           printf("Число %d наибольшее\n", a);
        }
     }
     else
     {
     if (b>c)
        printf("Число %d наибольшее\n", b);
     else
        printf("Число %d наибольшее\n", c);
     }
     system("pause");
     return 0;
}
