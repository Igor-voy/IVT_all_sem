#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    printf("������� ���\n ");
    scanf("%d", &a);
    if (a%4==0)
        printf("��� ���������� ��� - 366 ����\n ");
    else
        printf("��� ������� ��� - 365 ����\n ");
    system("pause");
    return 0;
}
