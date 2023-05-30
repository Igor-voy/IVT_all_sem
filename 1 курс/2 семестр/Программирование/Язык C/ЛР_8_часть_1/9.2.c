#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int mult(int a, int b){return a*b;}
struct Function{int(*f)(int, int);} obj;
int main(){
    setlocale(LC_ALL, "Rus");
    obj.f = mult;
    int x, y;
    printf("¬ведите два числа: \n"); scanf("%d %d", &x, &y);
    printf("%d * %d = %d", x, y, obj.f(x, y));
    return 0;}
