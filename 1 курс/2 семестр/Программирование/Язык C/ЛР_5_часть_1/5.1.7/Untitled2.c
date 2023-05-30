#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A[2][3] = {{1, 2, 3},{4, 5, 6}};
    printf("Матрица A:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
           printf(" %d ", A[i][j]);}
        printf("\n");}
    printf("Транспонированная матрица:\n");
    for(int j=0; j<3; j++){
        for(int i=0; i<2; i++){
           printf(" %d ", A[i][j]);}
        printf("\n");}
    system("pause");
    return 0;
}
