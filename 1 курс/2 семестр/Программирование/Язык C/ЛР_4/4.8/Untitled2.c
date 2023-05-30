#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int x;
     printf ("Введите число от 1 до 5\n");
     scanf ("%d", &x);
     switch(x)
     {
     case 1:
        printf("%d - минимальное число из набора\n", x);
        break;
     case 2:
        printf("%d - больше 1, но меньше 3\n", x);
        break;
     case 3:
        printf("%d - больше 2, но меньше 4\n", x);
        break;
     case 4:
        printf("%d - больше предыдущих чисел, но меньше 5\n", x);
        break;
     case 5:
        printf("%d - максимальное число из набора\n", x);
        break;
     }
     system("pause");
     return 0;
}
