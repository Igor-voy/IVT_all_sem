#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int m, n;
    printf("������� ���������� �����:\n ");
    scanf("%d", &m);
    printf("������� ���������� ��������:\n ");
    scanf("%d", &n);
    int X[m][n];
    printf("������� ������� X:\n ");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" X[%d][%d] = ", i, j);
            scanf("%d", &X[i][j]);
        }
    }
    printf("���������� ������� X:\n ");
    printf("\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf(" %d ", X[i][j]);
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}
