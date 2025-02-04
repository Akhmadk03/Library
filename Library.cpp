#include <iostream>
#include <vector>
#include "Book.h"


using namespace std;

// Function prototypes
void displayMenu();
void addBook(vector<Book>& books);
void viewBooks(const vector<Book>& books);

int main() {
    vector<Book> books;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            addBook(books);
            break;
        case 2:
            viewBooks(books);
            break;
        case 3:
            cout << "Exiting Program. GoodBye!" << endl;
            break;
        default:
            cout << "invalid choice. Please try again!" << endl;
        }
    } while (choice != 3);

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\n===== Books =====" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. View Books" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to add a book
void addBook(vector<Book>& books) {
    string category, title, author;
    int bookID;

    cin.ignore(); // To handle the newline charachter

    cout << "Enter Category: ";
    getline(cin, category);

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    cout << "Enter BookID: ";
    cin >> bookID;
}

// Function to view all books
void viewBooks(const vector<Book>& books) {
    if(books.empty()) {
        cout << "No books to display." << endl;
        return;
    }

    cout << "\n=== Your Books ===" << endl;
    for (size_t i = 0; i < books.size(); ++i) {
        cout << i << ". ";
        books[i].display();
    }
}