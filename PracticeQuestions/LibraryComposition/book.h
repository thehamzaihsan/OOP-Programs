#pragma once
#include <iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    string ISBN;
    int year_published;
    bool isAvailable;
public:
    Book(){
        title = "The Communist Manifesto";
        author = "Sir Karl Marx";
        ISBN = "00000-00000-0000";
        year_published = 1886;
        isAvailable = true;
    }
    Book(string t , string a , string I , int y , bool av){
        title = t;
        author = a;
        ISBN = I;
        year_published = y;
        isAvailable = av;
    }
    void borrowbook(){
        if(!isAvailable){
            cout << "Book is not available" << endl;
        }
        else{
            cout << "Here is your book" << endl;
            isAvailable = false;
        }
    }
    void returnbook(){
        cout << "book returned successfully" << endl;
        isAvailable = true;
    }
    void const display_details(){
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Year: " << year_published << endl;
        cout << "available: " << isAvailable << endl;
    }
    bool getavailable(){
        return isAvailable;
    }
};