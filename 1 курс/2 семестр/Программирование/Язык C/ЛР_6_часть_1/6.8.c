#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>

int main(){
    setlocale(LC_ALL, "Rus");
    int a = 10;
    char *p = (char*)&a;
    for(int i=0; i<4; i++)
        printf("% d ", *(p+i));
    printf("\n");
    system("pause");
    return 0;}
