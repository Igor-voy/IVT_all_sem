#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double **pointer = NULL;
    pointer = (double**)malloc(sizeof(double*));
    pointer[0] = (double*)malloc(sizeof(double));
    *pointer[0] = 2;
    printf("%lf", *pointer[0]);
    free(pointer);
    return 0;}
