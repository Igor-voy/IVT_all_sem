#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double y, x;
     printf("ОДЗ: (-1.25,-1) и (-1,%lf)\n", 1-sqrt(2));
     printf("Введите x\n");
     scanf("%lf", &x);
     if((x>-1.25 && x<-1)||(x>-1 && x<1-sqrt(2)) )
     {
     y = log10((2-x*x)/(sqrt(4*x+5))-1);
     printf("Результат = %lf\n", y);
     }
     else{
        printf("Не соответствует ОДЗ\n");
     }
     system("pause");
     return 0;
}
