#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A2[2][2], B[2][2], F[2][2];
    int A[2][2] = {{1, 2}, {3, 0}};
    int E[2][2] = {{1, 0}, {0, 1}};
    printf("Матрица A:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           printf(" %d ", A[i][j]);}
        printf("\n");}
    printf("Вычислить f(A)=-2*A*A+5*A+9*E \n");
    printf("\n");
    for(int i=0; i<2; i++)
            for(int j=0; j<2; j++){ A2[i][j]=0;
                         for(int k=0; k<2; k++)
                             A2[i][j] += A[i][k]*A[k][j];}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++) A2[i][j]*= -2;}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++) A[i][j]*= 5;}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++) E[i][j]*= 9;}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
            B[i][j] = A2[i][j]+A[i][j];}}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
            F[i][j] = B[i][j]+E[i][j];}}
    printf("Результат вычислений равен:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           printf(" %d ", F[i][j]);}
        printf("\n");}
    system("pause");
    return 0;
}
