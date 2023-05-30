#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#include "memory_allocation.h"
#include "mult_matrix.h"
#include "memory_free.h"

int main(){
    setlocale(LC_ALL, "Rus");
    int n;
    int **A, **B, **AB;
    A = createMatrix(n, "A");
    B = createMatrix(n, "B");
    AB = multMatrix(A, B, n, "AB");
    printf("AB: \n");
    for(int i=0; i<n; i++){
          for(int j=0; j<n; j++)
              printf(" %d ", AB[i][j]);
          printf("\n");}
    freeMatrix(A, n);
    freeMatrix(B, n);
    system("pause"); return 0;}
