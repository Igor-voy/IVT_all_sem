#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int sum, x, x1;
     printf("Введите x\n");
     scanf("%d", &x);
     sum = 0;
     while(x != 0)
        {
           x1 = x%10;
           x = x/10;
           sum = sum + x1;
        }
     printf("Сумма цифр числа = %d\n", sum);
     return 0;
}
