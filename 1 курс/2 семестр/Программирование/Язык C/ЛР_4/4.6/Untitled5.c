#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int a, b, c;
     printf ("Введите стороны треугольника\n");
     scanf ("%d", &a);
     scanf ("%d", &b);
     scanf ("%d", &c);
     if (a < b+c)
     {
        if (b < a+c)
        {
            if (c < a+b)
                printf ("Треугольник существует\n");
            else
                printf ("Треугольник не существует\n");
        }
        else
            printf ("Треугольник не существует\n");
     }
     else
        printf ("Треугольник не существует\n");
     system("pause");
     return 0;
}
