#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("������� ��� ����� \n"); scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    printf("����� = %d \n", *pa+*pb);
    system("pause");
    return 0;}
