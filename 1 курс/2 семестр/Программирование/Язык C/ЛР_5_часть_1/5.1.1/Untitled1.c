#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int X[5], Y[5];
    printf("Введите вектор X:\n ");
    for(int i=0; i<5; i++)
    {
        printf(" X[%d] = ", i);
        scanf("%d", &X[i]);
    }
    printf("Вектор Y равняется:\n");
    for(int i=0; i<5; i++)
    {
        Y[i]=X[i]*X[i];
        printf(" %d ", Y[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
