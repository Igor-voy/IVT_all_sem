#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int zam, n, i, j, k;
    printf("¬ведите количество элементов массива:\n ");
    scanf("%d", &n);
    int X[n];
    printf("¬ведите массив X:\n ");
    for(i=0; i<n; i++)
    {
        printf(" X[%d] = ", i);
        scanf("%d", &X[i]);
    }
    printf("»сходный массив:\n");
    for(i=0; i<n; i++)
    {
        printf(" %d ", X[i]);
    }
    printf("\n");
    printf("»змененный массив:\n");
    for(i=0;i<n;i++)
    {
        zam = X[i];
        k = i;
        for(j=i+1;j<n;j++)
        {
            if(X[j]>zam)
            {
                zam = X[j];
                k = j;
            }
        }
        X[k]=X[i];
        X[i]=zam;
    }
    for(i=0;i<n;i++)
        printf("% d ", X[i]);
    printf("\n");
    system("pause");
    return 0;
}
