#include <stdio.h>
#include <locale.h>
#include <math.h>
int fact(int t){
    if(t < 0) return 0;
    if(t == 0) return 1;
    return t*fact(t-1);}
int A(int n1, int k1){
    return fact(n1)/fact(n1-k1);}
int C(int n2, int k2){
    return fact(n2)/fact(k2)*fact(n2-k2);}
int main(){
    setlocale(LC_ALL, "Rus");
    int n, k;
    printf("Введите n \n"); scanf("%d", &n);
    printf("Введите k \n"); scanf("%d", &k);
    printf("Размещения \n");
    printf("A(%d,%d) = %d \n", n, k, A(n,k));
    printf("Сочетания \n");
    printf("C(%d,%d) = %d \n", n, k, C(n,k));
    printf("\n");
    system("pause");
    return 0;}
