#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define k 3.6
#define m 2.2
#define n 5
#define pi 3.14
double f(double a, double b){
       return (pow(sin(log10(a*b)*pi/180), 2)+1.0/sqrt(a*a+b*b));}
int main(){
    setlocale(LC_ALL, "Rus");
    double R;
    R = f(n*m, k)+pow(f(n*k, n),2)-pow(f(m, n),3);
    printf("R = %.3lf \n", R);
    system("pause");
    return 0;}
