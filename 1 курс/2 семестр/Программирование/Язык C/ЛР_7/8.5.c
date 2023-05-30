#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
int** vidilenie(int t, char X[]){
       int **mat = (int**)malloc(t*sizeof(int*));
       for(int i=0; i<t; i++)
           mat[i] = (int*)malloc(t*sizeof(int));
       for(int i=0; i<t; i++){
         for(int j=0; j<t; j++){
              printf("%s[%d][%d] = ", X, i, j);
              scanf("%d", &mat[i][j]);}
         printf("\n");}
       return mat;}
void osvobod(int t, int **mat){
     for(int i=0; i<t; i++)
         free(mat[i]);
     free(mat);}
void vivod(int t, int **mat, char X[]){
     for(int i=0; i<t; i++){
         for(int j=0; j<t; j++)
             printf("%s[%d][%d] = %d ", X, i, j, mat[i][j]);
         printf("\n");}}
int sled(int t, int **mat){
    int s=0;
    for(int i=0; i<t; i++){
        int j=i;
        s+=mat[i][j];}
    return s;}
int main(){
    setlocale(LC_ALL, "Rus");
    int **A, **B;
    int n, s_A, s_B;
    printf("������� n ��� ������ A � B: "); scanf("%d", &n);
    A = vidilenie(n, "A"); printf("\n");
    B = vidilenie(n, "B");
    s_A = sled(n, A); s_B = sled(n, B);
    if(s_A<s_B){
       printf("����������� ���� ������� A: \n");
       vivod(n, A, "A");
       printf("���� ������� A = %d", s_A);}
    else{
       printf("����������� ���� ������� B: \n");
       vivod(n, B, "B");
       printf("���� ������� B = %d", s_B);}
    printf("\n");
    osvobod(n, A);
    osvobod(n, B);
    system("pause");
    return 0;}
