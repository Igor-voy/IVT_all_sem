#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A[2][2] = {{1, -1},{-1, 1}}, B[2][2] = {{2, 0},{-3, 1}}, C[2][2] = {{3, -1},{2, 3}};
    int AB[2][2], BC[2][2], P1[2][2], P2[2][2];
    printf("(AB)*C\n");
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){ AB[i][j]=0;
                    for(int k=0; k<2; k++){ AB[i][j]+=A[i][k]*B[k][j];}}}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){ P1[i][j]=0;
                    for(int k=0; k<2; k++){ P1[i][j]+=AB[i][k]*C[k][j];}}}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                    printf(" %d ", P1[i][j]);}
            printf("\n");}
    printf("A*(BC)\n");
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){ BC[i][j]=0;
                    for(int k=0; k<2; k++){ BC[i][j]+=B[i][k]*C[k][j];}}}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){ P2[i][j]=0;
                    for(int k=0; k<2; k++){ P2[i][j]+=A[i][k]*BC[k][j];}}}
    for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                    printf(" %d ", P2[i][j]);}
            printf("\n");}
    system("pause");
    return 0;
}
