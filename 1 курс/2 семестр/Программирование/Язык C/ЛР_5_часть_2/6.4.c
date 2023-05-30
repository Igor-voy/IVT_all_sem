#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
    setlocale(LC_ALL, "Rus");
    int **A = NULL;
    int n, m, r;
    printf("n = "); scanf("%d", &n);
    printf("m = "); scanf("%d", &m);
    A = (int**)malloc(n * sizeof(int*));
    for(int i=0; i<n; i++)
        A[i] = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf(" A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);}
            printf("\n");}
    printf("Какую строку удалить?\n"); scanf("%d", &r);
    int **B = NULL;
    B = (int**)malloc((n-1) * sizeof(int*));
    for(int i=0; i<n-1; i++)
        B[i] = (int*)malloc(m * sizeof(int));
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m; j++){
            if (i<r) B[i][j] = A[i][j];
            else B[i][j] = A[i+1][j];
            printf("B[%d][%d] = %d ", i, j, B[i][j]);}
            printf("\n");}
    for(int i=0; i<n; i++)
        free(A[i]);
    for(int i=0; i<n-1; i++)
        free(B[i]);
    free(A); free(B);
    return 0;}
