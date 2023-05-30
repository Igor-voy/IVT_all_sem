#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 6
int main(){
    setlocale(LC_ALL, "Rus");
    int *A;
    A = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("A[%d] = ", i); scanf("%d", (A+i));}
    printf("\n");
    for(int i=n-1; i>=0; i--)
        printf(" A[%d] = %d \n", i, *(A+i));
    free(A);
    system("pause");
    return 0;}
