#include <iostream>
#include <cstring>

using namespace std;

struct Book{
int id;
char title[50];
char author[50];
char subject[100];
};

int main()
{
    struct Book book1;
    struct Book book2;

    book1.id=1234;
    book2.id=5678;

    strcpy(book1.author,"Ahmed Mohammed");
    strcpy(book2.author,"Sara Mohammed");

    strcpy(book1.title,"C++ for dummies");
    strcpy(book2.title,"C++ advance");

    strcpy(book1.subject,"Programming");
    strcpy(book2.subject,"Development");

    cout << book1.id << endl << book1.subject << endl << book1.title << endl << book1.author;
    cout << book2.id << endl << book2.subject << endl << book2.title << endl << book2.author;

    return 0;
}

