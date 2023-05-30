#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float A[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    printf("Матрица A \n");
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                    printf(" %.2f ", A[i][j]);}
            printf("\n");}
    A[0][0] = (A[0][0]+A[0][1]+A[0][2])/3;
    A[1][0] = (A[1][0]+A[1][1]+A[1][2])/3;
    A[2][0] = (A[2][0]+A[2][1]+A[2][2])/3;
    printf("Измененная матрица A \n");
    for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                    printf(" %.2f ", A[i][j]);}
            printf("\n");}
    system("pause");
    return 0;
}
