#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int x;
     printf ("������� ����� �� 1 �� 5\n");
     scanf ("%d", &x);
     switch(x)
     {
     case 1:
        printf("%d - ����������� ����� �� ������\n", x);
        break;
     case 2:
        printf("%d - ������ 1, �� ������ 3\n", x);
        break;
     case 3:
        printf("%d - ������ 2, �� ������ 4\n", x);
        break;
     case 4:
        printf("%d - ������ ���������� �����, �� ������ 5\n", x);
        break;
     case 5:
        printf("%d - ������������ ����� �� ������\n", x);
        break;
     }
     system("pause");
     return 0;
}
