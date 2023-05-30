#include <stdio.h>
#include <stdlib.h>
void freeMatrix(int **mat, int n){
     for(int i=0; i<n; i++)
         free(mat[i]);
     free(mat);}
