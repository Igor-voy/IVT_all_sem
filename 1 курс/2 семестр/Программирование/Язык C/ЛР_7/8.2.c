#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 5
#define m 6
int** vidilenie(int r, int c){
       int **mat;
       mat = (int**)malloc(r*sizeof(int*));
       for(int i=0; i<r; i++)
           mat[i] = (int*)malloc(c*sizeof(int));
       return mat;}
void osvobod(int r, int **mat){
     for(int i=0; i<r; i++)
         free(mat[i]);
     free(mat);}
void zapolnenie(int r, int c, double **mat, char X[]){
     for(int i=0; i<r; i++)
         for(int j=0; j<c; j++){
              printf("%s[%d][%d] = ", X, i, j);
              scanf("%lf", &mat[i][j]);}}
double P(int k, int h){
       return (h*1.0/sqrt(k)-1);}
int main(){
    setlocale(LC_ALL, "Rus");
    int **A, **B;
    double D;
    A = vidilenie(n, m);
    B = vidilenie(n, m);
    printf("Матрица A: \n");
    zapolnenie(n, m, A, "A");
    printf("\n");
    printf("Матрица B: \n");
    zapolnenie(n, m, B, "B");
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
             if(i!=0 && A[i][j]!=0){
                D = pow(P(A[i][j],B[i][j]), 3)-P(i, j);
                printf("i = %d, j = %d, D = %lf \n", i, j, D);}
             else printf("Деление на ноль \n");}
    osvobod(n, A);
    osvobod(n, B);
    system("pause");
    return 0;}
