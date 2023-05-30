#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
    setlocale(LC_ALL, "Rus");
    int n, m, *b, *a, **mat, r;
    printf("Размер вектора a = "); scanf("%d", &r);
    a = (int*)malloc(r*sizeof(int));
    for(int j = 0; j<r; j++){
        printf(" a[%d] = ", j); scanf("%d", &a[j]);}
    printf("Размер матрицы M \n");
    printf("n = "); scanf("%d", &n);
    printf("m = "); scanf("%d", &m);
    if (m != r){
        printf("Умножение невозможно"); return 0;}
    mat = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i<n; i++)
        mat[i] = (int*)malloc(m*sizeof(int));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++){
            printf(" M[%d][%d] = ", i, j); scanf("%d", &mat[i][j]);}
    b = (int*)calloc(n, sizeof(int));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)
            b[i] += mat[i][j]*a[j];
        printf(" b[%d] = %d ", i, b[i]);}
    free(a);free(b);
    for(int i = 0; i<n; i++)
        free(mat[i]); free(mat);
    return 0;}
