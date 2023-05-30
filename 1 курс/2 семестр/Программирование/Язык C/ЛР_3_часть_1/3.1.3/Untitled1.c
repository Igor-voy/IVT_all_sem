#include <stdio.h>
#include <locale.h>
#include <math.h>

long long int fact(long long int n)
{
if (n == 0||n==1)
return 1;
else {
n = n * fact(n - 1);
return n;
}
}

void p (long long int n)
{
double sum, p;
long long int f;
sum = 0;
for (int k = 0; k <= n; k++) {
f = fact(k);
sum =sum+ fact(4 * k) * (1103 + 26390 * k) / pow(f, 4) / pow(396, 4*k);
}
p = 9801 / (2 * sqrt(2) * sum);
printf("%.16lf\n", p);
}

int main()
{
    setlocale(LC_ALL, "Rus");
    printf("Результаты вычисления:\n ");
    printf("При n = 2:\n ");
    p(2);
    printf(" При n = 3:\n ");
    p(3);
    printf(" При n = 5:\n ");
    p(5);
    system("pause");
    return 0;
}
