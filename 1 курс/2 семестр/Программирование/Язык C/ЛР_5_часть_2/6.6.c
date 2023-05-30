#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void){
    int **A = NULL;
    int n;
    printf("n = "); scanf("%d", &n);
    A = (int**)malloc(n * sizeof(int*));
    for(int i=0; i<n; i++)
        A[i] = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j)%2==0)
               A[i][j]=0;
            else
               A[i][j]=1;
            printf(" A[%d][%d]= %d ", i, j, A[i][j]);}
        printf("\n");}
    for(int i=0; i<n; i++){
        free(A[i]);}
    free(A);
    return 0;}
