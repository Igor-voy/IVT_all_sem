#include <stdio.h>
#include <locale.h>
#include <math.h>
int fact1(int t){
    if(t < 0) return 0;
    if(t == 0) return 1;
    return t*fact1(t-1);}

int fact2(int t1){
    int a=1;
    for(int i=1; i<=t1; i++)
        a*=i;
    return a;}
int main(){
    setlocale(LC_ALL, "Rus");
    int n;
    printf("Введите число n\n");
    scanf("%d", &n);
    printf("Значение фактоиала циклом = %d\n", fact2(n));
    printf("Значение фактоиала рекурсией  = %d\n", fact1(n));
    system("pause");
    return 0;}
