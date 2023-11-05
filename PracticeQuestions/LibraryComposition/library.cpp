//
// Created by Hamza on 11/5/2023.
//

#include "library.h"
#include "book.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  Library library;
  library.display();

  cout << "Add you book";

    string title;
    string author;
    string ISBN;
    int year_published;
    bool isAvailable;

  cin >> title;
  cin >> author;
  cin >> ISBN;
  cin >> year_published;
  cin >> isAvailable;

    Book B(title,
           author,
           ISBN,
           year_published,
           isAvailable);
  library.addBook(B);

  library.display();
  library.displayborrowed();
}


