#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    printf(" 1-��, 0-���\n ");
    printf("��������� ����� �� 1 �� 5\n ");
    printf("���� ����� ������ 3?\n ");
    scanf("%d", &a);
    if (a==1)
    {
        printf("���� ����� 4?\n ");
        scanf("%d", &a);
        if (a==0)
            printf("���� ����� 5\n ");
        else
          printf("� ������\n ");
    }
    else
    {
        printf("���� ����� 1?\n ");
        scanf("%d", &a);
        if (a==0)
        {
            printf("���� ����� 2?\n ");
            scanf("%d", &a);
            if (a==0)
                printf("���� ����� 3\n ");
            else
                printf("� ������\n ");
        }
        else
          printf("� ������\n ");
    }
    system("pause");
    return 0;
}
