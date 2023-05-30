#include <stdio.h>
#include <stdlib.h>
int** multMatrix(int** mat_1, int** mat_2, int n, char X[]){
      int** mat = (int**)malloc(n*sizeof(int*));
      for(int i=0; i<n; i++)
          mat[i] = (int*)malloc(n*sizeof(int));
      for(int i=0; i<n; i++)
          for(int j=0; j<n; j++){
              mat[i][j] = 0;
              for(int k=0; k<n; k++)
                  mat[i][j]+=mat_1[i][k]*mat_2[k][j];}
      return mat;}
