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
double** umnojenie_mat(int n_r, int m_c, int n_r_1, double **mat, double **mat_2){
     double **res;
     res = vidilenie(n_r, m_c);
     for(int i=0; i<n_r; i++)
         for(int j=0; j<m_c; j++){
             res[i][j] = 0;
             for(int k=0; k<n_r_1; k++)
                 res[i][j]+=mat[i][k]*mat_2[k][j];}
     return res;}
double* umnojenie_vec(int n_r, int m_c, double **mat, int n_v, double *vec) {
	double *res;
	res = (double*)malloc(n_v*sizeof(double));
	for(int i=0; i<n_r; i++) {
		for(int j=0; j<m_c; j++)
			res[i]+=vec[j] * mat[i][j];
			printf("A[%d] = %lf\n", i, res[i]);}
    return res;}

int main(){
    setlocale(LC_ALL, "Rus");
    int n, m, n1, m1, n_ve;
    double **A, **B, **AB, *vect, *Avec;
    printf("¬ведите n первой матрицы \n"); scanf("%d", &n);
    printf("¬ведите m первой матрицы \n"); scanf("%d", &m);
    A = vidilenie(n, m);
    zapolnenie(n, m, A);
    printf("¬ведите n второй матрицы \n"); scanf("%d", &n1);
    printf("¬ведите m ¬торой матрицы \n"); scanf("%d", &m1);
    B = vidilenie(n1, m1);
    zapolnenie(n1, m1, B);
    printf("\n");
    if(m!=n1)
        printf("”множение матрицы A на матрицу B невозможно \n");
    else{
        printf("”множение матрицы A на матрицу B: \n");
        AB = umnojenie_mat(n, m, n1, A, B);
        vivod(n, m1, AB);}
    printf("¬ведите количество строк вектора \n"); scanf("%d", &n_ve);
    vect = (double*)malloc(n_ve*sizeof(double));
    for(int i=0; i<n_ve; i++){
        printf("Vector[%d] = ", i); scanf("%lf", &vect[i]);}
    if(m!=n_ve)
        printf("”множение матрицы A на вектор невозможно \n");
    else{
        printf("”множение матрицы A на вектор: \n");
        Avec = umnojenie_vec(n, m, A, n_ve, vect);}
    osvobod(n, AB);
    osvobod(n, A);
    osvobod(n1, B);
    free(Avec);
    free(vect);
    system("pause"); return 0;}
