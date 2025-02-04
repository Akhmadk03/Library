#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
    private:
        string category;
        string title;
        string author;
        int bookID;
    
    public:
        //Constructor
        Book(const string cat, const string ttl, const string atr, int bkid);

        //Getters
        string getCategory() const;
        string getTitle() const;
        string getAuthor() const;
        int getBookID();

        //Display Method
        void display() const;
        

};

#endif