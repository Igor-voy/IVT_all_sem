#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 11
int* vidilenie(int t, char X[]){
       int *mat;
       mat = (int*)malloc(t*sizeof(int));
       for(int i=0; i<t; i++){
           printf("%s[%d] = ", X, i); scanf("%d", &mat[i]);}
       return mat;}
int minimum(int t, int *X){
    int minimal = X[0];
    for(int i=0; i<t; i++){
        if(X[i]<minimal && X[i]>0) minimal = X[i];}
    return minimal;}
int main(){
    setlocale(LC_ALL, "Rus");
    int min_1, min_2;
    int *M, *N;
    printf("Массив M: \n");
    M = vidilenie(n, "M");
    printf("\n");
    printf("Массив N: \n");
    N = vidilenie(n, "N");
    min_1 = minimum(n, M);
    min_2 = minimum(n, N);
    printf("Минимальный элемент массива M: %d \n", min_1);
    printf("Минимальный элемент массива N: %d \n", min_2);
    free(M);
    free(N);
    system("pause");
    return 0;}
