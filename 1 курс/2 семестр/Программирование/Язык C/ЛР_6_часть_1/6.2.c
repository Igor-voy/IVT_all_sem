#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("¬ведите два числа \n"); scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    printf("—умма = %d \n", *pa+*pb);
    system("pause");
    return 0;}
