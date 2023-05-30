#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 12

int main(){
    int R = 0, Q = 0, S = 1;
    float T;
    int *F = (int *)malloc(n * sizeof(int));
    for (int i = 0; i<n; i++){
        printf("F[%d] = ", i);
        scanf("%d", &F[i]);
        if (F[i]<0)
            R+=F[i];
        else if (F[i]>0)
            S*=F[i];}
    for(int i=0; i<n; i++){
        if (F[i]<0){
            Q=F[i];
            T=1.0*(R+Q+S)/(R*Q*S*2);
            printf("Q = %d, T = %.2f\n", Q , T);}}
    free(F);
    return 0;}
