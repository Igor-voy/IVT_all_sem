#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int x, s;
     printf("Введите трехзначное число\n");
     do{
            scanf("%d", &x);
            s = (x/100)+((x/10)%10)+(x%10);
     }while(s>10);
     system("pause");
     return 0;
}
