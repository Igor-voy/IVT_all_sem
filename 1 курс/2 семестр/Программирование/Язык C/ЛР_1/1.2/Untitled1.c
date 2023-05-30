#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int x,y,sum;
    printf("¬ведите числа \n");
    scanf("%d", &x);
    scanf("%d", &y);
    sum = x+y;
    printf("—умма = %d\n", sum);
    return 0;
}
