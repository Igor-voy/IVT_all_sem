#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("������� ������ �����\n ");
    scanf("%ld", &a);
    printf("������� ������ �����\n ");
    scanf("%ld", &b);
    if (a % 2 == 0)
    {
        printf("����� %ld ��������\n ", b);
    }
    else
    {
        printf("����� %ld ��������\n ", a);
    }
    system("pause");
    return 0;
}
