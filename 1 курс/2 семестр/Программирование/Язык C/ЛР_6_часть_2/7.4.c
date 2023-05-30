#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
double** vidilenie(int n_r, int m_c){
       double **mat;
       mat = (double **)malloc(n_r*sizeof(double*));
       for(int i=0; i<n_r; i++)
           mat[i] = (double*)malloc(m_c*sizeof(double));
       return mat;}
void osvobod(int n_r, double **mat){
     for(int i=0; i<n_r; i++)
         free(mat[i]);
     free(mat);}
void zapolnenie(int n_r, int m_c, double **mat){
     for(int i=0; i<n_r; i++)
         for(int j=0; j<m_c; j++){
              printf("A[%d][%d] = ", i, j);
              scanf("%lf", &mat[i][j]);}}
void vivod(int n_r, int m_c, double **mat){
     for(int i=0; i<n_r; i++){
		  for(int j=0; j<m_c; j++)
              printf("A[%d][%d] = %lf ", i, j, mat[i][j]);
     printf("\n");}}
int main(){
    setlocale(LC_ALL, "Rus");
    int n, m;
    double **A;
    printf("Введите n \n"); scanf("%d", &n);
    printf("Введите m \n"); scanf("%d", &m);
    A = vidilenie(n, m);
    zapolnenie(n, m, A);
    printf("\n");
    printf("Матрица A: \n");
    vivod(n, m, A);
    osvobod(n, A);
    system("pause");
    return 0;}
