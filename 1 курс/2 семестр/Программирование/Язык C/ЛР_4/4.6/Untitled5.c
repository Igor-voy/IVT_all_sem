#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int a, b, c;
     printf ("������� ������� ������������\n");
     scanf ("%d", &a);
     scanf ("%d", &b);
     scanf ("%d", &c);
     if (a < b+c)
     {
        if (b < a+c)
        {
            if (c < a+b)
                printf ("����������� ����������\n");
            else
                printf ("����������� �� ����������\n");
        }
        else
            printf ("����������� �� ����������\n");
     }
     else
        printf ("����������� �� ����������\n");
     system("pause");
     return 0;
}
