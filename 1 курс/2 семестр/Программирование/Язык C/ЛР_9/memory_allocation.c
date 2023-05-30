#include <stdio.h>
#include <stdlib.h>
int** createMatrix(int n, char X[]){
       int **mat = (int**)malloc(n*sizeof(int*));
       for(int i=0; i<n; i++)
           mat[i] = (int*)malloc(n*sizeof(int));
       for(int i=0; i<n; i++){
           for(int j=0; j<n; j++){
               printf("%s[%d][%d] = ", X, i, j);
               scanf("%d", &mat[i][j]);}
           printf("\n");}
       return mat;}
