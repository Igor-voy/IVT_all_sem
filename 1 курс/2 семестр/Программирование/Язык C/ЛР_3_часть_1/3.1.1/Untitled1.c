#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "Rus");
     int a, b;
     float y, t, t1, t2;
     printf("¬ведите a\n");
     scanf("%f", &a);
     printf("¬ведите b\n");
     scanf("%f", &b);
     t = (a+pow(a,-1/2)*pow(b,3/2))/(a-b);
     t1 =(sqrt(a)-sqrt(b))/sqrt(a) ;
     t2 = sqrt(b)/(sqrt(a)-sqrt(b));
     y = t*pow(t1+t2,-1);
     printf("–езультат = %f\n", y);
     system("pause");
     return 0;
}
