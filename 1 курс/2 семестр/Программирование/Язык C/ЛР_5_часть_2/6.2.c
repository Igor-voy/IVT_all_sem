#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 12

int main(){
    int Y, S = 6, U = 0;
    int *A = (int *)malloc(n * sizeof(int));
    int T = 0;
    for (int i=0; i<n; i++){
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
        if (A[i] < 0)
            U += A[i];
        else if (A[i] > T)
            T = A[i];}
    Y = (U+T)*(S+2);
    printf("U = %d, T = %d, Y = %d \n", U, T, Y);
    free(A);
    return 0;}
