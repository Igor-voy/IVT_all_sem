#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int zam, n;
    printf("������� ���������� ��������� �������:\n ");
    scanf("%d", &n);
    int X[n];
    printf("������� ������ X:\n ");
    for(int i=0; i<n; i++)
    {
        printf(" X[%d] = ", i);
        scanf("%d", &X[i]);
    }
    printf("�������� ������:\n");
    for(int i=0; i<n; i++)
    {
        printf(" %d ", X[i]);
    }
    printf("\n");
    for(int i=1; i<n; i++)
	{
		for(int r=0; r<n-i; r++)
		{
			if(X[r] < X[r+1])
			{
				zam = X[r];
				X[r] = X[r+1];
				X[r+1] = zam;
			}
		}
	}
    printf("��������������� ������:\n");
    for(int i=0; i<n; i++)
    {
        printf(" %d ", X[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
