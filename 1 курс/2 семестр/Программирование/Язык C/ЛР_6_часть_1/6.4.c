#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <math.h>
#define n 6
int main(){
    setlocale(LC_ALL, "Rus");
    float *A;
    A = (float*)malloc(sizeof(float));
    for(int i=0; i<n; i++){
        printf("A[%d] = ", i); scanf("%f", (A+i));}
    printf("Массив A: \n");
    for(int i=0; i<n; i++){
        printf("A[%d] = %.2f \n", i, *(A+i));}
    free(A);
    system("pause");
    return 0;}
