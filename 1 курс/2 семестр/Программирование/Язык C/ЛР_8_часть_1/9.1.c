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
    strcpy(Book.title, "Евгений Онегин"); strcpy(Book.creator, "Александр Сергеевич Пушкин"); strcpy(Book.topic, "Любовная история");
    strcpy(Book.description, "В романе расскрывается взаимоотношение персонажей, а также раскрывается их жизнь");
    strcpy(Book.publisher, "Азбука"); strcpy(Book.authors, "Фролова Татьяна");
    strcpy(Book.date, "2014 год"); strcpy(Book.type, "Классическая отечественная поэзия"); strcpy(Book.format, "Книга");
    strcpy(Book.identifier, "ISBN: 978-5-389-04903-1"); strcpy(Book.source, "На русском языке"); strcpy(Book.language, "Оригинал-русский язык");
    strcpy(Book.relationship, "https://www.labirint.ru/books/366107/"); strcpy(Book.coverage, "Актуально по сегоднящний день");
    strcpy(Book.rights, "Свободно распространяется");
    printf("Название книги:%s\n", Book.title); printf("Создатель:%s\n", Book.creator); printf("Тема книги:%s\n", Book.topic);
    printf("О чем книга:%s\n", Book.description); printf("Публикация:%s\n", Book.publisher); printf("Редактор:%s\n", Book.authors);
    printf("Когда:%s\n", Book.date); printf("Тип:%s\n", Book.type); printf("Формат:%s\n", Book.format);
    printf("Идентификатор:%s\n", Book.identifier); printf("Источник:%s\n", Book.source); printf("Язык:%s\n", Book.language);
    printf("Адрес источника:%s\n", Book.relationship); printf("Распространение:%s\n", Book.coverage); printf("Права:%s\n", Book.rights);
return 0;}
