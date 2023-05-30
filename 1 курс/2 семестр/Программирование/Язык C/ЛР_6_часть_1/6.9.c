#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 3
#define m 4
int main(){
    setlocale(LC_ALL, "Rus");
    int *A;
    A = (int*)malloc(sizeof(int));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf(" A[%d][%d]= ", i, j);
            scanf("%d", A+i*m+j);}}
    printf("Матрица A: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            printf(" A[%d][%d] = %d ", i, j, *(A+i*m+j));
        printf("\n");}
    system("pause");
    return 0;}
