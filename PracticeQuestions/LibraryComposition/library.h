//
// Created by Hamza on 11/5/2023.
//
#include "book.h"
#include <iostream>
using namespace std;

class Library{
private:
    int books_number = 2;
    Book books[20];
public:
    void const display(){
        cout << "Details:" << endl;
        for (int i = 0; i < books_number; ++i) {
            books[i].display_details();
            cout << endl;
        }
    }

    void addBook(Book B){
        books[books_number] = B;
        books_number++;
    }

    void const displayborrowed(){
        for (int i = 0; i < books_number; ++i) {
            if (books[i].getavailable() == false){
                books[i].display_details();
                cout << endl;
            }
        }
    }
};