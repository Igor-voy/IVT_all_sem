#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#define n 12
int fib(int a){
    if (a==1 || a==2) a = 1;
    else a = fib(a-1) + fib(a-2);
    return a;}
int pad(int b){
    if (b==1 || b==2 || b==3) b = 1;
    else b = pad(b-2) + pad(b-3);
    return b;}
int main(){
    setlocale(LC_ALL, "Rus");
    int p=0;
    int *A = (int*)malloc(n*sizeof(int));
    int *B = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        A[i]=fib(i+1);
        printf("% d ", A[i]);}
    printf("\n");
    for(int i=0; i<n; i++){
        B[i]=pad(i+1);
        printf("% d ", B[i]);}
    printf("\n");
    printf("Пересечение множеств: \n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i]==B[j]&&A[i]!=p){
            p=A[i];
            printf(" %d ", p);}
    free(A); free(B);
    return 0;}
