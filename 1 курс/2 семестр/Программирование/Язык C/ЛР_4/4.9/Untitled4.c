#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int a, b, c;
     printf ("������� ����� a, b, c\n");
     scanf ("%d", &a);
     scanf ("%d", &b);
     scanf ("%d", &c);
     if (a>b)
     {
        if (a>c)
        {
           printf("����� %d ����������\n", a);
        }
     }
     else
     {
     if (b>c)
        printf("����� %d ����������\n", b);
     else
        printf("����� %d ����������\n", c);
     }
     system("pause");
     return 0;
}
