#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     double x, y;
     printf ("������� ���������� x\n");
     scanf ("%lf", &x);
     printf ("������� ���������� y\n");
     scanf ("%lf", &y);
     if ((x>0)&&(y>0))
        printf ("����� ��������� � ������ ��������\n");
     if ((x<0)&&(y>0))
        printf ("����� ��������� �� ������ ��������\n");
     if ((x<0)&&(y<0))
        printf ("����� ��������� � ������� ��������\n");
     if ((x>0)&&(y<0))
        printf ("����� ��������� � ��������� ��������\n");
     system("pause");
     return 0;
}
