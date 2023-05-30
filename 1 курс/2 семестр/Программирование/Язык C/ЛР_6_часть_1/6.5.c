#include <stdio.h>
#include <locale.h>
#include <math.h>
int f(int a){
    if(a == 0) return 1;
    return f(a-1)*a;}

int main(){
  setlocale(LC_ALL, "Rus");
  int n;
  int *p = &n;
  printf("Введите число"); scanf("%d", &*p);
  printf("Факториал %d = %d \n", *p, f(*p));
  system("pause");
  return 0;}
