#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 3
int zapolnenie_vect(int t){
    int *v;
    v = (int*)malloc(t*sizeof(int));
    for(int i=0; i<t; i++){
        printf("Vector[%d] = ", i); scanf("%d", (v+i));}
    return v;}
int* umnojenie_vec(int *v_1, int *v_2){
	int *res;
	res = (int*)malloc(n*sizeof(int));
	*(res+0) = *(v_1+1) * *(v_2+2) - *(v_1+2) * *(v_2+1);
	*(res+1) = *(v_1+2) * *(v_2+0) - *(v_1+0) * *(v_2+2);
	*(res+2) = *(v_1+0) * *(v_2+1) - *(v_1+1) * *(v_2+0);
    return res;}
int main(){
    setlocale(LC_ALL, "Rus");
    int *vec_1, *vec_2, *vec_12;
    printf("¬ведите первый вектор: \n");
    vec_1 = zapolnenie_vect(n);
    printf("¬ведите второй вектор: \n");
    vec_2 = zapolnenie_vect(n);
    printf("”множение аекторов: \n");
    vec_12 = umnojenie_vec(vec_1, vec_2);
    for(int i=0; i<n; i++)
        printf("V[%d] = %d \n", i, vec_12[i]);
    free(vec_1);
    free(vec_2);
    free(vec_12);
    system("pause");
    return 0;}
