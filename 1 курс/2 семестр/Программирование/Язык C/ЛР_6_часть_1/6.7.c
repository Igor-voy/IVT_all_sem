#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>
#define n 6
int sortirovka(int razmer, int mas[]){
    int sled, pred; //Следующий и предыдущий элементы
    for(int i = 1; i<razmer; i++){
        sled = mas[i]; pred = i-1;
    while(pred>=0 && mas[pred]>sled){
        mas[pred+1] = mas[pred];
        pred = pred-1;}
    mas[pred+1] = sled;}}
int main(){
    setlocale(LC_ALL, "Rus");
    int A[n];
    int *Ap = A;
    printf("Введите массив A \n");
    for(int i = 0; i<n; i++){
        printf("A[%d]= ", i); scanf("%d", (A+i));}
    sortirovka(n, A);
    printf("Отсортированный массив \n");
    for(int i = 0; i<n; i++)
        printf(" %d ", *(Ap+i));
    printf("\n");
    system("pause");
    return 0;}
