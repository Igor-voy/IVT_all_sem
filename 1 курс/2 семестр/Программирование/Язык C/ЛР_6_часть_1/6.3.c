#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("¬ведите a и b \n"); scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    if(*pa > *pb)
       printf("a > b \n");
    else if(*pa < *pb)
            printf("a < b \n");
         else
            printf("a = b \n");
    system("pause");
    return 0;}
