#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
struct DublinCore{
       char authors[50];
       char coverage[50];
       char creator[50];
       char date[50];
       char description[100];
       char format[50];
       char identifier[50];
       char language[50];
       char publisher[50];
       char relationship[50];
       char rights[50];
       char source[50];
       char topic[50];
       char title[50];
       char type[50];}Book;
int main(){
    setlocale(LC_ALL, "Rus");
    strcpy(Book.title, "������� ������"); strcpy(Book.creator, "��������� ��������� ������"); strcpy(Book.topic, "�������� �������");
    strcpy(Book.description, "� ������ ������������� ��������������� ����������, � ����� ������������ �� �����");
    strcpy(Book.publisher, "������"); strcpy(Book.authors, "������� �������");
    strcpy(Book.date, "2014 ���"); strcpy(Book.type, "������������ ������������� ������"); strcpy(Book.format, "�����");
    strcpy(Book.identifier, "ISBN: 978-5-389-04903-1"); strcpy(Book.source, "�� ������� �����"); strcpy(Book.language, "��������-������� ����");
    strcpy(Book.relationship, "https://www.labirint.ru/books/366107/"); strcpy(Book.coverage, "��������� �� ����������� ����");
    strcpy(Book.rights, "�������� ����������������");
    printf("�������� �����:%s\n", Book.title); printf("���������:%s\n", Book.creator); printf("���� �����:%s\n", Book.topic);
    printf("� ��� �����:%s\n", Book.description); printf("����������:%s\n", Book.publisher); printf("��������:%s\n", Book.authors);
    printf("�����:%s\n", Book.date); printf("���:%s\n", Book.type); printf("������:%s\n", Book.format);
    printf("�������������:%s\n", Book.identifier); printf("��������:%s\n", Book.source); printf("����:%s\n", Book.language);
    printf("����� ���������:%s\n", Book.relationship); printf("���������������:%s\n", Book.coverage); printf("�����:%s\n", Book.rights);
return 0;}
