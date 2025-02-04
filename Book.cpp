#include "Book.h"
#include <iostream>

using namespace std;

//Constructor
Book::Book(const string cat, const string ttl, const string atr, int bkid)
    : category(cat), title(ttl), author(atr), bookID(bkid) {}

    //Getters
    string Book::getCategory() const {
        return category;
    }

    string Book::getTitle() const {
        return title;
    }

    string Book::getAuthor() const {
        return author;
    }

    int Book::getBookID() {
        return bookID;
    }

    void Book::display() const {
        cout << "Category: " << category
             << ", Title: " << title
             << ", Author: " << author
             << ", BookID" << bookID << endl;
    }