#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 12
int zamena(int *A,int a){
    int t;
    for(int i=0; i<a-1; i+=2){
        t=A[i+1];
        A[i+1]=A[i];
        A[i]=t;}}

int main(){
    setlocale(LC_ALL, "Rus");
    int *A;
    A=(int*)malloc(n*sizeof(int));
    printf("Исходный массив \n");
    for(int i=0; i<n; i++){
        printf("A[%d] = ", i); scanf("%d", (A+i));}
    zamena(A,n);
    printf("Измененный массив \n");
    for(int i=0; i<n; i++)
        printf("A[%d] = %d \n", i, *(A+i));
    free(A);
    system("pause");
    return 0;}
