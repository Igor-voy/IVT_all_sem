#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 5
int** vidilenie(){
       int **mat = (int**)malloc(n*sizeof(int*));
       for(int i=0; i<n; i++)
           mat[i] = (int*)malloc(n*sizeof(int));
       for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
              printf("S[%d][%d] = ", i, j);
              scanf("%d", &mat[i][j]);}
         printf("\n");}
       return mat;}
void osvobod(int **mat){
     for(int i=0; i<n; i++)
         free(mat[i]);
     free(mat);}
double srednie(int **mat){
       int sum = 0;
       for(int i=1; i<n; i++)
           for(int j=n-i; j<n; j++)
               sum+=mat[i][j];
       double mid = sum*1.0/(n*(n-1)/2);
       return mid;}
int main(){
    setlocale(LC_ALL, "Rus");
    printf("Матрица S: \n");
    int **S = vidilenie(); printf("\n");
    double sred = srednie(S); printf("\n");
    printf("Среднее значение = %.1lf", sred);
    printf("\n");
    osvobod(S);
    system("pause");
    return 0;}
