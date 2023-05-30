#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
struct Vector{
       char name[1];
       int x;
       int y;
       int z;} vec_1, vec_2;
int scalyar(struct Vector v_1, struct Vector v_2){return v_1.x*v_2.x+v_1.y*v_2.y+v_1.z*v_2.z;}
double modul(struct Vector v){return sqrt(v.x*v.x+v.y*v.y+v.z*v.z);}
struct Vector vProd(struct Vector v_1, struct Vector v_2){
struct Vector v;
v.x = v_1.y*v_2.z - v_1.z*v_2.y;
v.y = v_1.z*v_2.y - v_1.x*v_2.z;
v.z = v_1.x*v_2.y - v_1.y*v_2.x;
return v;}
int main(){
    setlocale(LC_ALL, "Rus");
    printf("Введите координаты первого вектора: ");
    scanf("%s = (%d, %d, %d)", &vec_1.name, &vec_1.x, &vec_1.y, &vec_1.z);
    printf("Введите координаты второго вектора: ");
    scanf("%s = (%d, %d, %d)", &vec_2.name, &vec_2.x, &vec_2.y, &vec_2.z);
    struct Vector result;
    printf("Скалярное произведение = %d \n", scalyar(vec_1, vec_2));
    result = vProd(vec_1, vec_2);
    printf("Векторное произведение = (%d, %d, %d) \n", result.x, result.y, result.z);
    printf("Модуль вектора %s = %lf \n", vec_1.name, modul(vec_1));
    printf("Модуль вектора %s = %lf \n", vec_2.name, modul(vec_2));
    return 0;}
