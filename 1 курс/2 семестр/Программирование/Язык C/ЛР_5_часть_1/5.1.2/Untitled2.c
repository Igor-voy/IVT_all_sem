#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int X[5];
    printf("������� ������ X:\n ");
    for(int i=0; i<5; i++)
    {
        printf(" X[%d] = ", i);
        scanf("%d", &X[i]);
    }
    printf("�������� ������� ����� �������:\n");
    for(int i=0; i<5; i++)
    {
        printf(" %d ", X[4-i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
