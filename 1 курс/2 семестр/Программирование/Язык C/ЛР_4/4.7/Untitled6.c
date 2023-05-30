#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double x, y;
     printf ("Введите координату x\n");
     scanf ("%lf", &x);
     printf ("Введите координату y\n");
     scanf ("%lf", &y);
     if ((x>0)&&(y>0))
        printf ("Точка находится в первой четверти\n");
     if ((x<0)&&(y>0))
        printf ("Точка находится во второй четверти\n");
     if ((x<0)&&(y<0))
        printf ("Точка находится в третьей четверти\n");
     if ((x>0)&&(y<0))
        printf ("Точка находится в четвертой четверти\n");
     system("pause");
     return 0;
}
